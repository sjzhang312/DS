#include<iostream>
#include<algorithm>
const int maxn=10010;
int A[maxn],dp[maxn]; //dp[i]表示的是以A[i]结尾的LIS长度 
using namespace std;
/*
	dp[j+1]>dp[i] 这如果满足条件，这样就能保证序列是严格递增的
	   1）递增序列的话，dp[j+1]一定大于dp[i] 
	   否则，动态转移方程在中间计算时可能出现错误,可能被重新赋值为初始值1 
	   dp[i]只和小于i的j有关  
*/
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
	int ans=-1;
	for(int i=1;i<=n;i++){
		dp[i]=1;
		for(int j=1;j<i;j++){
			if(A[i]>=A[j]&&dp[j+1]>dp[i]){  
				dp[i]=dp[j]+1;//用来更新dp[i] 
			}
		}
		ans=max(ans,dp[i]);
	} 
	cout<<ans<<endl;
	return 0;
 } 
 //整体复杂度为O（n^2) 

// A={1,2,3,-1,-2,7,9}
// dp[1]  1
// dp[2]  2
// dp[3]  3
// dp[4]  1
// dp[5]  1
// dp[6]  4
// dp[7]  5 
 
