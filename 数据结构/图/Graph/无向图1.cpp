#include"邻接表存储结构1.cpp"
int cnt=0;
//bool visited[MAXVEX];
//创建邻接表
void Create(GraphAdjList &G){
    int i,j,k;
    EdgeNode *p;
    printf("输入顶点数和边数:\n");
	cin>>G.numVertexes>>G.numEdges;
    //输入顶点信息
    printf("输入顶点信息:\n");
    for(i=1;i<=G.numVertexes;i++){
		cin>>G.adjlist[i].data;
        G.adjlist[i].firstedge=NULL;           //将指向边表的指针初始化 
    } 

    //建立边表
    printf("输入边(Vi,Vj)中的下标i,j:\n"); 
    for(k=0;k<G.numEdges;k++){
        scanf("%d%d",&i,&j);
//        p=(EdgeNode *)malloc(sizeof(EdgeNode));
		EdgeNode *p=new EdgeNode();//c++写法 
        p->adjvex=j;                                //邻接点域 
        
        p->next=G.adjlist[i].firstedge;            //头插法插入边结点 
        G.adjlist[i].firstedge=p;

//        //下面代码有向图无,无向图有 
//        p=(EdgeNode *)malloc(sizeof(EdgeNode));//c写法 
//        p->adjvex=i;                                //邻接点域 
//        p->next=G.adjlist[j].firstedge;            //头插法插入边结点 
//        G.adjlist[j].firstedge=p;
    }

    //打印邻接表
    printf("邻接表为:\n");
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
输入顶点数和边数:
8 10
输入顶点信息:
1 2 3 4 5 6 7 8
输入边(Vi,Vj)中的下标i,j:
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
邻接表为:
(1,2)(1,5)
(2,6)(2,1)
(3,4)(3,7)(3,6)
(4,8)(4,7)(4,3)
(5,1)
(6,7)(6,3)(6,2)
(7,8)(7,4)(7,3)(7,6)
(8,4)(8,7)



输入顶点数和边数:
4 5
输入顶点信息:
A B C D
输入边(Vi,Vj)中的下标i,j:
1 2
1 3
1 4
2 3
3 4
邻接表为:
(A,D)(A,C)(A,B)
(B,C)(B,A)
(C,D)(C,B)(C,A)
(D,C)(D,A)


*/ 

