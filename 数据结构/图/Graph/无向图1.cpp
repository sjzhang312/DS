#include"�ڽӱ�洢�ṹ1.cpp"
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
		cin>>G.adjlist[i].data;
        G.adjlist[i].firstedge=NULL;           //��ָ��߱��ָ���ʼ�� 
    } 

    //�����߱�
    printf("�����(Vi,Vj)�е��±�i,j:\n"); 
    for(k=0;k<G.numEdges;k++){
        scanf("%d%d",&i,&j);
//        p=(EdgeNode *)malloc(sizeof(EdgeNode));
		EdgeNode *p=new EdgeNode();//c++д�� 
        p->adjvex=j;                                //�ڽӵ��� 
        
        p->next=G.adjlist[i].firstedge;            //ͷ�巨����߽�� 
        G.adjlist[i].firstedge=p;

//        //�����������ͼ��,����ͼ�� 
//        p=(EdgeNode *)malloc(sizeof(EdgeNode));//cд�� 
//        p->adjvex=i;                                //�ڽӵ��� 
//        p->next=G.adjlist[j].firstedge;            //ͷ�巨����߽�� 
//        G.adjlist[j].firstedge=p;
    }

    //��ӡ�ڽӱ�
    printf("�ڽӱ�Ϊ:\n");
    for(i=1;i<=G.numVertexes;i++){
        p=G.adjlist[i].firstedge;
        while(p){
            printf("(%c,%c)",G.adjlist[i].data,G.adjlist[p->adjvex].data);
            p=p->next;
        }
        printf("\n");
    } 
} 
void DFS(GraphAdjList G,int i,int j,bool& can_reach){
//	cout<<i<<" "<<j<<endl;
	if(i==j){
		can_reach=true;
		return ;
	}
	visited[i]=true;
	EdgeNode *p=G.adjlist[i].firstedge;
	while(p){
		if(!visited[p->adjvex]&&!can_reach){
			DFS(G,p->adjvex,j,can_reach);
		}
		p=p->next;
	}
}
int main(){
    GraphAdjList G;
    Create(G);
    cout<<endl;
    bool T=false;
    DFS(G,1,4,T);
    cout<<T;
   
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
A B C D
�����(Vi,Vj)�е��±�i,j:
1 2
1 3
1 4
2 3
3 4
�ڽӱ�Ϊ:
(A,D)(A,C)(A,B)
(B,C)(B,A)
(C,D)(C,B)(C,A)
(D,C)(D,A)


*/ 

