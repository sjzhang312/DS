#include<iostream>
#include<cstring>
#include<algorithm>
int n,m;
using namespace std;
const int maxn=1010;

int v[maxn],w[maxn];
int f[maxn][maxn];
int main()
{
	
	cin>>m>>n;
	for(int i=1;i<=n;i++)cin>>v[i]>>w[i];
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			//不选第i个物品 
			f[i][j]=f[i-1][j];
			if(j>=v[i])
			//选第i个物品
			f[i][j]=max(f[i][j],f[i][j-v[i]]+w[i]);
		}
	} 
	printf("max=%d",f[n][m]);
	
	return 0;
}
