#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int a[N+10],sum[N+10]={0};
	for(int i=1;i<=N;i++){
		cin>>a[i];
		if(a[i]<i)
		sum[i-a[i]]+=1;
		sum[a[i]-i]+=1;
	}

	for(int i=N-1;i>=0;i--){
		if(sum[i]>1){
			cout<<i<<" "<<sum[i];
			cout<<endl;
		}
		
	}
 } 
