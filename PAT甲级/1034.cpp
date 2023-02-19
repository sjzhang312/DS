#include<iostream>
#include<cstring>
#include<map>
using namespace std;
const int maxn=2010;
const int INF=1000000000;
map<string,int>stringToint;
map<int,string>intTostring;
map<string,int>Gang;
int G[maxn][maxn]={0},weight[maxn]={0};//邻接矩阵G 点权weight 
int n,k,numPerson=0; 
bool vis[maxn]={false};		//标记是否被访问 

void DFS(int nowVisit,int& head,int& numMember,int& totalValue){
	numMember++;
	vis[nowVisit]=true;
	if(weight[nowVisit]>weight[head])
	head=nowVisit;
	
	for(int i=0;i<numPerson;i++){
		if(G[nowVisit][i]>0){
			totalValue+=G[nowVisit][i];
			G[nowVisit][i]=G[i][nowVisit]=0;//删除这条边
			if(vis[i]==false){
				DFS(i,head,numMember,totalValue);
			} 
		}
	}
}

//DFSTRAVE函数吧遍历整个图，获得每个连通块的信息
void DFSTRAVE(){
	for(int i=0;i<numPerson;i++){
		if(vis[i]==false){
			int head=i,numMember=0,totalValue=0;
			DFS(i,head,numMember,totalValue);
			if(numMember>2&&totalValue>k){
				Gang[intTostring[head]]=numMember;
			}
		}
	}
} 
int change(string str){
	if(stringToint.find(str)!=stringToint.end()){
		return stringToint[str];
	}
	else{
		stringToint[str]=numPerson;
		intTostring[numPerson]=str;
		return numPerson++;
	}
	
	
	
	
}
int main()
{
	string str1,str2;
	int w;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>str1>>str2>>w;
		int id1=change(str1);
		int id2=change(str2);
		weight[id1]+=w;
		weight[id2]+=w;
		G[id1][id2]+=w;
		G[id2][id1]+=w;
	}
	DFSTRAVE();
	
	cout<<Gang.size()<<endl;
	map<string,int>::iterator it;
	
	for(it=Gang.begin();it!=Gang.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
	
 } 
