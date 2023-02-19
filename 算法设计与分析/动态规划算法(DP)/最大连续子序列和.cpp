#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=10010;
int A[maxn],dp[maxn];//dp[i]存放以A[i]结尾的最大连续子序列的和 
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	dp[0]=A[0];
	for(int i=1;i<n;i++){
		dp[i]=max(A[i],dp[i-1]+A[i]);
	}
	int k=0;
	for(int i=0;i<n;i++){
		if(dp[i]>dp[k]){
			k=i;
		}
	}
	cout<<dp[k]<<endl;
 } 
