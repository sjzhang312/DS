#include<iostream>
#include<vector> 
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n+1);
	for(int i=1;i<=n;i++)
	cin>>v[i];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			vector<int>lie;
			vector<int>a(n+1,1); 
			a[i]=a[j]=-1;
			for(int k=1;k<=n;k++)
			if(v[k]*a[abs(v[k])]<0)
			lie.push_back(k);
			if(lie.size()==2&&a[lie[0]]+a[lie[1]]==0){
				cout<<i<<" "<<j;
				return 0;
	/*每个人说的数字保存在v数组中，i从1~n,j从i+1~n遍历，分别假设i和j是狼人，a数组表示
	该人是狼人还是好人，等于1表示好人，等于-1表示狼人。
	***k从1~n分别判断k所说的话是真是假，k说的话和真实情况不同（即v[k]*a[abs(v[k])<0)则表示k在说谎，则将k放在lLie数组中；
	遍历完成后判断lie数组，如果说谎人数等于2并且这两个说谎的人一个是好人一个是坏人
	（即a[lie[0]]+a[lie[1]]==0)表示满足题意，此时输出i和j并return,否则最后输出no solution~ */
			} 
		}
	}
	cout<<"No Solution";
	return 0;
 } 
