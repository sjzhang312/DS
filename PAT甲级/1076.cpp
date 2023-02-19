#include<iostream>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;
const int maxn=1010;
struct Node{
	int id;
	int layer;
};
vector<Node>Adj[maxn];//领接表 
bool inq[maxn]={false};//标记表结点是否被访问过
 
int BFS(int s,int L){
	int numforward=0;
	queue<Node>q;
	Node start;
	start.id=s;
	start.layer=0;
	q.push(start);
	inq[start.id]=true;
	while(!q.empty()){
		Node topNode=q.front();
		q.pop();
		int u=topNode.id;
		for(int i=0;i<Adj[u].size();i++){
			Node next=Adj[u][i];
			next.layer=topNode.layer+1;
			if(inq[next.id]==false&&next.layer<=L){
				q.push(next);
				inq[next.id]=true;
				numforward++;
			}
		}
	}
	return numforward;
}
int main(){
	int n,L,numfollow,idfollow;
	cin>>n>>L;
	Node user;
	for(int i=1;i<=n;i++){
		user.id=i;
		scanf("%d",&numfollow);
		for(int j=0;j<numfollow;j++){
			scanf("%d",&idfollow);
			Adj[idfollow].push_back(user);
		}
	}
	int numQuery,s;
	scanf("%d",&numQuery);
	for(int i=0;i<numQuery;i++){
		memset(inq,false,sizeof(inq));
		scanf("%d",&s);
		int numforward=BFS(s,L);
		printf("%d\n",numforward);
	}
	return 0;
}


