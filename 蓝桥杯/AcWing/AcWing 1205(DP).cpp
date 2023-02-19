#include<iostream>
#include<algorithm>
using namespace std;
int n,m,minn,maxn,ans;
bool dp[1000000]; 
int main()
{
	cin>>n>>m;
	dp[0]=true;
	minn=min(n,m);
	maxn=max(n,m);
	for(int i=minn;i<n*m;i++){
		if(dp[i-minn])
			dp[i]=true;
		else if(i>=maxn&&dp[i-maxn])
			dp[i]=true;
		else ans=i;
	}
	cout<<ans;
}
