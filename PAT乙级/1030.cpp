#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	int N,a[100010],count=0;
	long long p;
	cin>>N>>p;
	for(int i=0;i<N;i++)
		cin>>a[i];
	sort(a,a+N);
	for(int i=0;i<N;i++){
		for(int j=i+count;j<N;j++){
		if(a[j]>a[i]*p)
		break;
		if(j-i+1>count)         //如果此次的长度大于上一次，更新数列长度
        count=j-i+1;

		}	
	}
	printf("%d",count); 
}
