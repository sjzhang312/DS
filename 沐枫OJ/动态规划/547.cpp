#include<iostream>
#include<algorithm>
#include<cstring>
#include<set>
using namespace std;
const int maxn=1010;
int a[maxn];
int f[maxn];
/*
	������������� 
	f[i] ��ǰ������������ĵ����� 
*/ 
int main()
{
	int h,count=1;
	while(cin>>h){
		a[count++]=h;
	}

	int ans=-1;
	for(int i=1;i<count;i++){
		f[i]=1;
		for(int j=1;j<i;j++){
			if(a[j]>=a[i]&&f[j]+1>f[i]){
				f[i]=f[j]+1;
			}
		}
		ans=max(ans,f[i]);
	} 

	for(int i=1;i<count;i++)cout<<f[i]<<" ";cout<<endl;
	int t=0;
	for(int i=1;i<count;i++){
		if(f[i]<=f[i-1])t++;
	}
	cout<<ans<<endl;
	cout <<  t+1;

 } 
 
// 300 250 275 252 200 138 245
//300 275 252 200 1
