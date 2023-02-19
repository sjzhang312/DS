#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=110;
int a[maxn][maxn],dp[maxn][maxn];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			scanf("%d",&a[i][j]);	
			//向左向右的次数不大于1 
//			if(i>(n+2)/2){
//				if(j<((n-1)/2+1+i-n)||j>((n/2)+1)){
//				a[i][j]=-1;
//              }
//			} 
		}
	}
	for(int j=1;j<=n;j++){
		dp[n][j]=a[n][j];
	}
	int left=0,right=0;
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
		}
	}
	cout<<dp[1][1];

}
