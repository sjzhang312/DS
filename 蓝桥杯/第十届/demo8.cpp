#include<iostream>
#include<queue>
using namespace std;

const int maxn=100;
int p[maxn][maxn]={0};
struct 	node{
	int x,y,time;
}Node;
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
int n,m,k,t;
queue<node>q;
void BFS(){
//	queue<node>q;
	
	while(!q.empty()){
		node top=q.front();
		for(int i=0;i<4;i++){
			int newx=top.x+x[i];
			int newy=top.y+y[i];
			if(newx>=0&&newx<n&&newy>=0&&newy<m&&top.time<k&&p[newx][newy]!=1){
				p[newx][newy]=1;
				q.push({newx,newy,top.time+1});
			}
		}
		q.pop();
	}
	
}
int main(){
	cin>>n>>m;
	cin>>t;
	int r,c;
	for(int i=0;i<t;i++){
		cin>>r>>c;
		p[r-1][c-1]=1;
		q.push({r-1,c-1,0});
		
	}
	cin>>k;
	BFS();
	
	int num=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(p[i][j]==1)num++;
		}
	}
	cout<<num;
}
