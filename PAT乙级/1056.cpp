#include<iostream> 
#include<cstdio>
using namespace std;
int main()
{
	int N,number,sum=0;
	cin>>N;
	int a[N];
	for(int i=0;i<N;i++)
	cin>>a[i];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			sum+=a[i]*10+a[j];
		}
		sum-=(a[i]*10+a[i]);
	}
	printf("%d",sum);
	
}
