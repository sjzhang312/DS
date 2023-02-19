#include<iostream>
using namespace std;
const int maxn=11;
int n,p[maxn],hashtable[maxn]={false};
void generatep(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			printf("%d",p[i]);
		}
		printf("\n");
		return;
	}
	for(int x=1;x<=n;x++){
		if(hashtable[x]==false){
			p[index]=x;
			hashtable[x]=true;
			generatep(index+1);
			hashtable[x]=false;
		}
	}
}
int main()
{
	 n=3;
	generatep(1);
	return 0;
}
