#include"邻接表存储结构.cpp" 
//创建邻接表
void Create(GraphAdjList &G){
    int i,j,k;
    EdgeNode *p;

    printf("输入顶点数和边数:\n");
	cin>>G.numVertexes>>G.numEdges;
	
    //输入顶点信息
    printf("输入顶点信息:\n");
    for(i=0;i<G.numVertexes;i++){
		cin>>G.adjlist[i].data;
        G.adjlist[i].firstedge=NULL;           //将指向边表的指针初始化 
    } 

    //建立边表
    printf("输入边(Vi,Vj)中的下标i,j:\n"); 
    for(k=0;k<G.numEdges;k++){
        scanf("%d%d",&i,&j);
		EdgeNode *p=new EdgeNode();//c++写法 
        p->adjvex=j;                                //存储弧头 
        
        p->next=G.adjlist[i].firstedge;            //头插法插入边结点 
        G.adjlist[i].firstedge=p;
        
//        //下面代码有向图无,无向图有 
//        p=(EdgeNode *)malloc(sizeof(EdgeNode));//c写法 
//        p->adjvex=i;                                //存储弧头 
//        p->next=G.adjlist[j].firstedge;            //头插法插入边结点 
//        G.adjlist[j].firstedge=p;
    }
    //打印邻接表
    printf("邻接表为:\n");
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
示例
输入顶点数和边数:
4 5
输入顶点信息:
A B C D
输入边(Vi,Vj)中的下标i,j:
0 1
0 2
0 3
1 2
2 3
邻接表为:
(A,D)(A,C)(A,B)
(B,C)(B,A)
(C,D)(C,B)(C,A)
(D,C)(D,A)
*/ 
