#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int a[10010],b[10010],count=0;
	for(int i=1;i<=N;i++){
		int flag=1;
		a[i]=i/2+i/3+i/5;
		for(int j=0;j<count;j++){
			if(b[j]==a[i])
			flag=0;
		}
		if(flag){
			b[count]=a[i];
			count++;
		}
		
	
	}
	cout<<count;
}
