#include<iostream>
using namespace std;
const int maxn=100;
int P[maxn],n;
bool hashtable[maxn]={false};
//��ǰ����x�ĵ�index��λ 
void DFS(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			cout<<P[i];
		}
	cout<<endl;
	return ;
	}
	
	for(int i=1;i<=n;i++){
		if(hashtable[i]==false){
			P[index]=i;
			hashtable[i]=true;
			DFS(index+1);
			hashtable[i]=false;
		}
	}
} 

int main(){
	n=3;
	DFS(1);
}
