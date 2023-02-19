#include<iostream>
#include<cstring>
#include<map>
using namespace std;
const int maxn=2010;
const int INF=1000000000;
int G[maxn][maxn]={0},weight[maxn]={0};
bool vis[maxn]={false};
int numperson=0,k,n;
map<string,int>stringToint;
map<int,string>intTostring;
map<string,int>Gang;
int change(string str){
	if(stringToint.find(str)==stringToint.end()){
		stringToint[str]=numperson;
		intTostring[numperson]=str;
		return numperson++;
	}
	else
	return stringToint[str];
}
void DFS(int nowvisit,int& head,int& numMember,int& totalvalue){
	numMember++;
	vis[nowvisit]=true;
	if(weight[nowvisit]>weight[head])
	head=nowvisit;
	for(int i=0;i<numperson;i++){
		if(G[nowvisit][i]>0){
			totalvalue+=G[nowvisit][i];
			G[i][nowvisit]=G[nowvisit][i]=0;
			if(vis[i]==false)
			DFS(i,head,numMember,totalvalue);
		}
	}
}
void DFSTrave(){
	for(int i=0;i<numperson;i++){
		if(vis[i]==false){
			int head=i,totalvalue=0,numMember=0;
			DFS(i,head,numMember,totalvalue);
			if(totalvalue>k&&numMember>2){
				Gang[intTostring[head]]=numMember;
			}
		}
	}
}


int main(){
	int w;
	cin>>n>>k;
	string str1,str2;
	for(int i=0;i<n;i++){
		cin>>str1>>str2>>w;
		int id1=change(str1);
		int id2=change(str2);
		weight[id1]+=w;
		weight[id2]+=w;
		G[id1][id2]+=w;
		G[id1][id2]+=w;
	}
	DFSTrave();
	cout<<Gang.size()<<endl;
}
