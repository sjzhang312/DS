#include"�ڽӱ�洢�ṹ.cpp" 
//�����ڽӱ�
void Create(GraphAdjList &G){
    int i,j,k;
    EdgeNode *p;

    printf("���붥�����ͱ���:\n");
	cin>>G.numVertexes>>G.numEdges;
	
    //���붥����Ϣ
    printf("���붥����Ϣ:\n");
    for(i=0;i<G.numVertexes;i++){
		cin>>G.adjlist[i].data;
        G.adjlist[i].firstedge=NULL;           //��ָ��߱��ָ���ʼ�� 
    } 

    //�����߱�
    printf("�����(Vi,Vj)�е��±�i,j:\n"); 
    for(k=0;k<G.numEdges;k++){
        scanf("%d%d",&i,&j);
		EdgeNode *p=new EdgeNode();//c++д�� 
        p->adjvex=j;                                //�洢��ͷ 
        
        p->next=G.adjlist[i].firstedge;            //ͷ�巨����߽�� 
        G.adjlist[i].firstedge=p;
        
//        //�����������ͼ��,����ͼ�� 
//        p=(EdgeNode *)malloc(sizeof(EdgeNode));//cд�� 
//        p->adjvex=i;                                //�洢��ͷ 
//        p->next=G.adjlist[j].firstedge;            //ͷ�巨����߽�� 
//        G.adjlist[j].firstedge=p;
    }
    //��ӡ�ڽӱ�
    printf("�ڽӱ�Ϊ:\n");
    for(i=0;i<G.numVertexes;i++){
        p=G.adjlist[i].firstedge;
        while(p){
            printf("(%d,%d)",G.adjlist[i].data,G.adjlist[p->adjvex].data);
            p=p->next;
        }
        printf("\n");
    } 
} 
//int main(){
//
//    GraphAdjList G;
//
//    Create(G);
//}
/*
ʾ��
���붥�����ͱ���:
4 5
���붥����Ϣ:
A B C D
�����(Vi,Vj)�е��±�i,j:
0 1
0 2
0 3
1 2
2 3
�ڽӱ�Ϊ:
(A,D)(A,C)(A,B)
(B,C)(B,A)
(C,D)(C,B)(C,A)
(D,C)(D,A)
*/ 
