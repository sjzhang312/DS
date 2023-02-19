#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool compare(int x,int y){
	return x<y;
}
int main()
{
	int N,M;
	
	cin>>N>>M;

	int a[N+10][N+10];
	int b[N+10];
	for(int i=0;i<N;i++){
			int sum=0,count=0,t=0;
		for(int j=0;j<N;j++){
			cin>>a[i][j];
			if(j>0&&a[i][j]>=0&&a[i][j]<=M){
			b[t]=a[i][j];
			t++;
			}
		}
	
		sort(b,b+t,compare);
		for(int jj=1;jj<t-1;jj++){
			sum+=b[jj];
			count++;
		}
	
	int s=0;
	sum/=count;
	s=(sum+a[i][0])*1.0/2+0.5;
	cout<<s<<endl;
	}
	
}
