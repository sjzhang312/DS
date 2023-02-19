#include<cstdio>
#include<queue> 
#include<iostream>
using namespace std;

///结构体 
struct node{
	int x,y;
}Node;
//全局变量 
const int maxn=100;
int matrix[maxn][maxn];
bool inq[maxn][maxn]={false};
int X[]={0,0,1,-1};
int Y[]={1,-1,0,0};
int n,m; 

//BFS
void BFS(int x,int y){
	queue<node>Q;
	Node.x=x;
	Node.y=y;
	//Q.push(Node);
	Q.push(Node);
	inq[x][y]=true; 
	while(!Q.empty()){
		node top =Q.front();
		Q.pop();
		for(int i=0;i<4;i++){
				int newx=top.x+X[i];
				int newy=top.y+Y[i];
				if(newx>=0&&newx<n&&newy>=0&&newy<m&&matrix[newx][newy]==1&&inq[newx][newy]==false){
					Node.x=newx,Node.y=newy;
					Q.push(Node);
					inq[newx][newy]=true;//设置结点已入队 
				}
			}
		
	} 
}
// 


int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int ans=0;//块数
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==1&&inq[i][j]==false){
				ans++;
				BFS(i,j);
			}
		}
	}
	cout<<ans; 
 }  
 
// 6 7
// 0 1 1 1 0 0 1
// 0 0 1 0 0 0 0
// 0 0 0 0 1 0 0
// 0 0 0 1 1 1 0
// 1 1 1 0 1 0 0
// 1 1 1 1 0 0 0
