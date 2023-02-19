#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N,K;
	cin>>N;
	int a[100010],b[100010];
	for(int i=0;i<N;i++)
	cin>>a[i];
	cin>>K;
	for(int i=0;i<K;i++){
		int count=0;
		cin>>b[i];
		for(int j=0;j<N;j++){
			if(a[j]==b[i])
			count++;
		}
		if(i!=0)
		cout<<" ";
		cout<<count;
	}
}
