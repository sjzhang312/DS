#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=520;
int a[maxn];
int f[maxn]; //f[i]表示当前最长递增序列 
int n,ans;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	/*
	if(n==1)return 1;
	if(n==2)if(a[i]>a[i-1]) return 2;
	else return 1;
	*/
	for(int i=0;i<n;i++){
		f[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){	
				f[i]=f[j]+1 ;
				 
			}
		}
		ans=max(ans,f[i]);
	}

	cout<<ans;
	return 0;
}
