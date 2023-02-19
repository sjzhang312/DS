#include<iostream>
using namespace std;
const int maxn=1010;
int f[maxn][maxn];
int main()
{
	int f[1][1];
	for(int i=3;i<=5;i++){
		for(int j=1;j<=i;j++){
			f[i][j]=f[i-1]f[j]+f[i-1][j-1];
		}
	}
	for(int j=1;j<=5;j++)
	cout<<f[5][j]<<" ";
 } 
