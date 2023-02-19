#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	int a[10010];
	int b[10010]={0};
	int c[10010]={0};
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>a[j];
			b[j]+=a[j];
		}
	}
	int max=0,count=0; 
	for(int i=0;i<N;i++){
		if(b[i]>=max){
			max=b[i];
		}
	}
	
	cout<<max<<endl;
	for(int i=0;i<N;i++){
		if(b[i]==max){
		c[count]=i+1;
		count++;
		}
	}
	for(int i=0;i<count;i++){
		
		if(i!=0)
		cout<<" ";
		cout<<c[i];
	}
}
