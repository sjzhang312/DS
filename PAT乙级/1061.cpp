#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N,M,fenzhi[110],answer[110],panduan[110];
	cin>>N>>M; 
	for(int i=0;i<M;i++)
	cin>>fenzhi[i];
	for(int i=0;i<M;i++)
	cin>>answer[i];
	for(int i=0;i<N;i++){
		int sum=0;
		for(int j=0;j<M;j++){
			cin>>panduan[j];
			if(panduan[j]==answer[j])
			sum+=fenzhi[j];
		}
		cout<<sum<<endl;
	}
}
