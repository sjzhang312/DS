#include<iostream>
#include<algorithm>
const int maxn=10010;
int A[maxn],dp[maxn]; //dp[i]��ʾ������A[i]��β��LIS���� 
using namespace std;
/*
	dp[j+1]>dp[i] ����������������������ܱ�֤�������ϸ������
	   1���������еĻ���dp[j+1]һ������dp[i] 
	   ���򣬶�̬ת�Ʒ������м����ʱ���ܳ��ִ���,���ܱ����¸�ֵΪ��ʼֵ1 
	   dp[i]ֻ��С��i��j�й�  
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
				dp[i]=dp[j]+1;//��������dp[i] 
			}
		}
		ans=max(ans,dp[i]);
	} 
	cout<<ans<<endl;
	return 0;
 } 
 //���帴�Ӷ�ΪO��n^2) 

// A={1,2,3,-1,-2,7,9}
// dp[1]  1
// dp[2]  2
// dp[3]  3
// dp[4]  1
// dp[5]  1
// dp[6]  4
// dp[7]  5 
 
