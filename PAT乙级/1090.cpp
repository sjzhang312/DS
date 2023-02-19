#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n,k,t1,t2;
    map<int,vector<int>>m;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
    	scanf("%d%d",&t1,&t2);
    	m[t1].push_back(t2);
    	m[t2].push_back(t1);
	}
//	用map存储每一个货物的所有不兼容货物～在判断给出的一堆货物是否是相容的时候，
//	判断任一货物的不兼容货物是否在这堆货物中～如果存在不兼容的货物，则这堆货物不能相容～
//	如果遍历完所有的货物，都找不到不兼容的两个货物，则这堆货物就是兼容的
	while(k--){
		int cnt,flag=0,a[100000]={0};
		scanf("%d",&cnt);
		vector<int> v(cnt);
		for(int i=0;i<cnt;i++){
			scanf("%d",&v[i]);
			a[v[i]]=1;
		}
		for(int i=0;i<cnt;i++){
			for(int j=0;j<m[v[i]].size();j++)
			if (a[m[v[i]][j]] == 1)
			flag = 1;
		}
				
				printf("%s\n",flag?"No":"Yes");
	} 
//	map<int,vector<int>> m的意思是，对于m中的每一对键值对，键是一个int类型数值，
//	值是一个数组，也就是说键m[v[i]]所对应的值是一个数组，数组中的每一个元素通过j访问，
//	数组中每个元素为m[v[i]][j]，if (a[m[v[i]][j]] == 1)表示判断这个元素在a数组中对应的值是否是1
}
