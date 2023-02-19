//给n个结点m条边，再给k个集合。对这k个集合逐个进行判断。每个集合S里面的数字都是结点编号，
//求问整个图是否符合顶点覆盖的定义（即所有的m条边两端的结点，是否至少一个结点出自集合S中）。
//如果是，输出Yes否则输出No。
#include<iostream>
#include<vector>
#include<set>
using namespace std;

struct node{
	int a;
	int b;
};
int main(){
	int N,M,e,k,x;
	cin>>N>>M;
	vector<node>g(M);
	for(int i=0;i<M;i++){
		cin>>g[i].a>>g[i].b;
	}
	
	
	cin>>k;
	while(k--){
		cin>>e;
		set<int>s;
		for(int j=0;j<e;j++){
			scanf("%d",&x);
			s.insert(x);
		}
		int flag=1;
		for(int i=0;i<M;i++){
			if(s.find(g[i].a)==s.end()&&s.find(g[i].b)==s.end()){
				cout<<"No"<<endl;
				flag=0;
				break;
			}
		}
		if(flag)cout<<"Yes"<<endl;
	}
} 
