#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int a[10010],b,c,sum[N+10]={0},t[10010],count=0,flag;
	for(int i=0;i<N;i++){
		flag=1;
		cin>>a[i]>>b>>c;
		sum[a[i]]+=c;
		 for(int j=0;j<count;j++){
		 	if(a[i]==t[j])
		 	flag=0;
		 }
		 if(flag){
		 	t[count]=a[i];
		 	count++;
		 }
	}
//	for(int i=0;i<count;i++)
//	cout<<t[i]<<" "<<sum[t[i]]<<" ";
//	cout<<endl;
	int max=0,tt;
	for(int i=0;i<count;i++){
		if(sum[t[i]]>max){
		max=sum[t[i]];
		tt=t[i];
		}
	}
	cout<<tt<<" "<<max;
	
}
