#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
const int maxn=11;
int p[maxn],hashtable[maxn]={false};
int n,cnt=0;
void generateP(int index)
{
	if(index==n+1){
		for(int i=1;i<=n;i++)
		cout<<p[i];
		cout<<endl;
//		return ;
	}
	for(int i=1;i<=n;i++){
		if(hashtable[i]==false){
			p[index]=i;
			hashtable[i]=true;
			generateP(index+1);
			hashtable[i]=false;
		}
	}
}
int main()
{
	cin>>n;
	generateP(1);
 } 
