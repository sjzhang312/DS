#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int a,b;
	double sum,max=0;
	for(int i=0;i<N;i++){
		cin>>a>>b;
		sum=sqrt(a*a+b*b);
		if(sum>max)
		max=sum;
	}
	printf("%.2lf",max);
}
