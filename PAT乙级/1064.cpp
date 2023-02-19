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
	int a[N+10],t;
	int b[N+10],s=0,count=0,k=0,c[N+10];
	for(int i=0;i<N;i++){
		cin>>a[i];
		int flag=1,sum=0,m=1;
		while(a[i]!=0){
			t=a[i]%10;
			sum+=t;
			a[i]/=10;
		}
		for(int j=0;j<k;j++){
			if(sum==c[j])
			m=0;
		}
		if(m){
			for(int j=0;j<count;j++){
			if(b[j]==sum){	
			flag=0;
			}
		}
		if(flag){
			b[count]=sum;
			count++;
		}
		}
		
	}
	cout<<count<<endl;
	sort(b,b+count,compare);
	for(int i=0;i<count;i++){
		if(i!=0)
		cout<<" ";
		cout<<b[i]; 
	}
}
