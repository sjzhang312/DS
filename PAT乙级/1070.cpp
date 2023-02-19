#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool compare(int x,int y){
	return x<y;
}
int main()
{
	int N;
	cin>>N;
	double a[N+10];
	for(int i=0;i<N;i++){
		cin>>a[i];
	} 
	sort(a,a+N,compare);
	double sum=a[0];
	for(int i=1;i<N;i++){
		sum=sum/2+a[i]/2;
	}
	int t;
	t=(int)sum;
	cout<<t;
}
