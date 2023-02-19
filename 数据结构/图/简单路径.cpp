#include"邻接表存储结构.cpp"
int len=0;//记录当前路径长度 
int path[MAXVEX]; 
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
		cin>>G.vertices[i].data;
        G.vertices[i].firstedge=NULL;           //将指向边表的指针初始化 
    } 

    //建立边表
    printf("输入边(Vi,Vj)中的下标i,j:\n"); 
    for(k=0;k<G.numEdges;k++){
        scanf("%d%d",&i,&j);
		EdgeNode *p=new EdgeNode();//c++写法 
        p->adjvex=j;                                //存储弧头 
        
        p->next=G.vertices[i].firstedge;            //头插法插入边结点 
        G.vertices[i].firstedge=p;

        //下面代码有向图无,无向图有 
        p=(EdgeNode *)malloc(sizeof(EdgeNode));//c写法 
        p->adjvex=i;                                //存储弧头 
        p->next=G.vertices[j].firstedge;            //头插法插入边结点 
        G.vertices[j].firstedge=p;
    }

    //打印邻接表
    printf("邻接表为:\n");
    for(i=1;i<=G.numVertexes;i++){
        p=G.vertices[i].firstedge;
        while(p){
            printf("(%d,%d)",G.vertices[i].data,p->adjvex);
            p=p->next;
        }
        printf("\n");
    } 
} 

///////////////////////////从顶点i到顶点j的所有长度为k的简单路径 
void DFS(GraphAdjList G,int i,int j,int k){
	visited[i]=true;//将当前结点设置为已访问
	path[len]=i;//记录当前结点，并对路径长度+1
	len++;
	if(len==k+1&&i==j){//找到长度为k的路径且当前结点(i)为j
		for(int m=0;m<len;m++){
			cout<<path[m]<<" ";
		}
		cout<<endl;
		return;
	}
	
	//未找到
	EdgeNode *p=G.vertices[i].firstedge;//指向第一个边结点
	while(p){
		if(!visited[p->adjvex])
			DFS(G,p->adjvex,j,k);
		p=p->next;	
	} 
	len--;//搜索后路径-1 
	visited[i]=false;//恢复访问位( 	
} 

void PrintSimplePath(GraphAdjList G,int i,int j,int k){
	for(int m=1;m<=G.numVertexes;m++)
		visited[m]=false;//初始化
	DFS(G,i,j,k);	 
} 
int main(){
    GraphAdjList G;
    Create(G);
    cout<<endl;
    PrintSimplePath(G,2,8,4);//从顶点2到顶点8长度为4 
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

2 6 7 8 4 
*/ 
