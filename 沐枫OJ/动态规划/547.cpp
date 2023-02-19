#include<iostream>
#include<algorithm>
#include<cstring>
#include<set>
using namespace std;
const int maxn=1010;
int a[maxn];
int f[maxn];
/*
	最长不上升子序列 
	f[i] 当前最多能拦下来的导弹数 
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
