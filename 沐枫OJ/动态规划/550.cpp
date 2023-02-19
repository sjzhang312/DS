#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1010;
int f[maxn][maxn];
char x[maxn],y[maxn];
int main()
{
	gets(x+1);
	gets(y+1);
	int n=strlen(x+1);
	int m=strlen(y+1);

	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(x[i]==y[j]){
				f[i][j]=f[i-1][j-1]+1;
			}
			else{
				f[i][j]=max(f[i-1][j],f[i][j-1]);
			} 
		}
	}
	cout<<f[n][m];
	return 0;
 } 
