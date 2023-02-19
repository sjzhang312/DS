#include"�ڽӱ�洢�ṹ.cpp"
int cnt=0;
//bool visited[MAXVEX];
//�����ڽӱ�
void Create(GraphAdjList &G){
    int i,j,k;
    EdgeNode *p;

    printf("���붥�����ͱ���:\n");
	cin>>G.numVertexes>>G.numEdges;
	
    //���붥����Ϣ
    printf("���붥����Ϣ:\n");
    for(i=1;i<=G.numVertexes;i++){
		cin>>G.vertices[i].data;
        G.vertices[i].firstedge=NULL;           //��ָ��߱��ָ���ʼ�� 
    } 

    //�����߱�
    printf("�����(Vi,Vj)�е��±�i,j:\n"); 
    for(k=0;k<G.numEdges;k++){
        scanf("%d%d",&i,&j);
//        p=(EdgeNode *)malloc(sizeof(EdgeNode));
		EdgeNode *p=new EdgeNode();//c++д�� 
        p->adjvex=j;                                //�洢��ͷ 
        
        p->next=G.vertices[i].firstedge;            //ͷ�巨����߽�� 
        G.vertices[i].firstedge=p;

        //�����������ͼ��,����ͼ�� 
        p=(EdgeNode *)malloc(sizeof(EdgeNode));//cд�� 
        p->adjvex=i;                                //�洢��ͷ 
        p->next=G.vertices[j].firstedge;            //ͷ�巨����߽�� 
        G.vertices[j].firstedge=p;
    }

    //��ӡ�ڽӱ�
    printf("�ڽӱ�Ϊ:\n");
    for(i=1;i<=G.numVertexes;i++){
        p=G.vertices[i].firstedge;
        while(p){
            printf("(%d,%d)",G.vertices[i].data,p->adjvex);
            p=p->next;
        }
        printf("\n");
    } 
} 
//����������� 
void BFS(GraphAdjList G,int v){
	queue<int >q;
	visited[v]=true;
	cout<<G.vertices[v].data<<" "; 
	q.push(v);
	while(!q.empty()){
		int cur=q.front();
		q.pop();	
		EdgeNode *p=G.vertices[cur].firstedge;
		while(p){
			if(!visited[p->adjvex]){
				q.push(p->adjvex);
				visited[p->adjvex]=true;		
//				cout<<G.adjlist[p->adjvex].data<<" "; 
				cout<<p->adjvex<<" ";
			} 
			p=p->next;
		}
	}	
}
int main(){
    GraphAdjList G;
    Create(G);
    cout<<endl;
} 

/*
���붥�����ͱ���:
8 10
���붥����Ϣ:
1 2 3 4 5 6 7 8
�����(Vi,Vj)�е��±�i,j:
1 5
1 2
2 6
6 3
6 7
3 7
3 4
7 4
7 8
4 8
�ڽӱ�Ϊ:
(1,2)(1,5)
(2,6)(2,1)
(3,4)(3,7)(3,6)
(4,8)(4,7)(4,3)
(5,1)
(6,7)(6,3)(6,2)
(7,8)(7,4)(7,3)(7,6)
(8,4)(8,7)



���붥�����ͱ���:
4 5
���붥����Ϣ:
1 2 3 4
�����(Vi,Vj)�е��±�i,j:
1 2
1 3
1 4
2 3
3 4
�ڽӱ�Ϊ:
(1,4)(1,3)(1,2)
(2,3)(2,1)
(3,4)(3,2)(3,1)
(4,3)(4,1)



*/ 

