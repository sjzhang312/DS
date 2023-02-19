#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1010;
int f[maxn][maxn];
int a[maxn][maxn];
int flag[maxn][maxn];
int n,ans;
int x=1,y=1,c=1;
int main()
{
	cin>>n;
	
	while(x!=0&&y!=0&&c!=0){
		cin>>x>>y>>c;
		a[x][y]=c;	
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			f[i][j]=max(f[i-1][j],f[i][j-1])+a[i][j];
			if(f[i-1][j]>f[i][j-1]){//从上面来的标记为1 
				flag[i][j]=1;
			}
		} 
	} 
	ans+=f[n][n];
	x=n,y=n;
	while(x>=1&&y>=1){
		a[x][y]=0;
		if(flag[x][y]==1)
		x-=1;
		else y-=1;
	} 
	memset(f,0,sizeof(f));
	//二次DP 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			f[i][j]=max(f[i-1][j],f[i][j-1])+a[i][j];
		} 
	} 
	cout<<ans+f[n][n];
	
	
	
}
