#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
const int maxn=110;
int f[maxn];//f[i]表示下标为i时当前最长不下降子序列的长度 
int a[maxn];
//线性DP 
int main()
{
	//用来存每一个f[i]的不下降子序列 
	vector<vector<int>>v(110); 
	int num=0,ans=-1;
	while(cin>>a[num]){
		num++;
	}
	for(int i=0;i<num;i++){
		f[i]=1;//初始它本身为一个不下降子序列
		v[i].push_back(a[i]);
		for(int j=0;j<i;j++){
			if(a[i]>=a[j]&&f[j]+1>f[i]){
				v[i].push_back(a[j]);//把它的不下降子序列装入下标为i 的vector数组 
				//动态转移
				f[i]=f[j]+1 ;
			}
		}
		ans=max(ans,f[i]); 
	} 

	printf("max=%d\n",ans);



	
 } 
