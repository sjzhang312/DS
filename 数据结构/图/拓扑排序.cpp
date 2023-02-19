#include<stack>
#include<vector>
#include"邻接表创建有向图.cpp"
using namespace std;
stack<int>s;//栈初始化 
const int maxn=100;
vector<int>indegree(100);
void visit(GraphAdjList G){//统计结点入度 
	int i,j;
	EdgeNode *p;
	
	for(i=0;i<G.numVertexes;i++){
		p=G.adjlist[i].firstedge;
		while(p){
			int val=p->adjvex; 
			indegree[val]+=1; 
			p=p->next;
		}
	}
	cout<<"每个结点的入度"<<endl; 
	for(i=0;i<G.numVertexes;i++)cout<<indegree[i]<<" ";
}


bool TopologicalSort(GraphAdjList G){
	EdgeNode *p;
	int i,j;
	for(i=0;i<G.numVertexes;i++){
		if(indegree[i]==0)s.push(i);
	}
//	cout<<endl<<s.top();
	int count=0,cur;
	cout<<endl<<"拓扑排序为：";
	while(!s.empty()){
		cur=s.top();
		cout<<cur;
		count++;
		s.pop();//栈顶元素出栈
//		for(p=G.adjlist[cur].firstedge;p;p=p->next){
//			int v=p->adjvex;//边表结点
//			if(!(--indegree[v]))
//			s.push(v); 				
//		}
		EdgeNode *p=G.adjlist[cur].firstedge;		
		while(p){
			int v=p->adjvex;
			if(--indegree[v]==0)
				s.push(v);
			p=p->next;
		}
	}
//	cout<<count<<endl;
	if(count<G.numVertexes)return false;//排序失败 
	return true;
}
int main(){

    GraphAdjList G;

    Create(G);
    visit(G);//计算每个结点的入度 
    TopologicalSort(G);//拓扑排序 
}

/*
输入顶点数和边数:
5 5
输入顶点信息:
0 1 2 3 4
输入边(Vi,Vj)中的下标i,j:
0 1
1 3
2 3
2 4
3 4
邻接表为:
(0,1)
(1,3)
(2,4)(2,3)
(3,4)

每个结点的入度
0 1 0 2 2
拓扑排序为：20134
*/ 

