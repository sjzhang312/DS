#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1010;
int w[maxn],c[maxn];
int n,v,maxvalue=0;

void DFS(int index,int sumw,int sumc){
	if(index==n+1){
		if(sumw<=v&&sumc>maxvalue)maxvalue=sumc;
		return;
	}
	DFS(index+1,sumw,sumc);
	DFS(index+1,sumw+w[index],sumc+c[index]);
} 
/*
	不选index号物品，那么sumw和sumc不变，接下来前往DFS（index+1，sumw,sumc) 这条分支；
	如果选择放入index件物品，那么sumw将加上当前物品的重量w[index],sumc将加上当前物品的价值量c[index]
	,接下来处理index+1号物品，即前往DFS（index+1，sumw+w[index],sumc+c[index]) 
	
	只要index大于n，则说明已把n件物品处理完毕，此时sumw和sumc就是所选物品的总重量和总价值
	如果sumw不超过v且sumc大于maxvalue，于是当前所选的方案可以得到更大的价值，用sumc更新maxvalue 
*/
int main()
{
	cin>>n>>v;
	for(int i=1;i<=n;i++)cin>>w[i];
	for(int i=1;i<=n;i++)cin>>c[i];
	DFS(1,0,0);
	cout<<maxvalue;
	return 0;
 } 
