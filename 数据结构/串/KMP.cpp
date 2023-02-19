#include<iostream>
using namespace std;
//const int maxn=1010;
int index_KMP(string S,string T,int next[]){
	int i=1,j=1;
	while(i<=S.lenght()&&j=<T.length()){
		if(S[i]==T[j]){
			i+=1;
			j+=1;
		}else
			j=next[j];//模式串向右移动 
	}
	if(j>T.length())
	return i-T.length();
	else return 0;
}
int next[1010];
int main(){
	string S,T;
	cin>>S;
	cin>>T;
	int n;
	next={};
	index_KMP(S,T,next);
	
} 
