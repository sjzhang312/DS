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
			//��ѡ��i����Ʒ 
			f[i][j]=f[i-1][j];
			if(j>=v[i])
			//ѡ��i����Ʒ
			f[i][j]=max(f[i][j],f[i][j-v[i]]+w[i]);
		}
	} 
	printf("max=%d",f[n][m]);
	
	return 0;
}
