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
	/*ÿ����˵�����ֱ�����v�����У�i��1~n,j��i+1~n�������ֱ����i��j�����ˣ�a�����ʾ
	���������˻��Ǻ��ˣ�����1��ʾ���ˣ�����-1��ʾ���ˡ�
	***k��1~n�ֱ��ж�k��˵�Ļ������Ǽ٣�k˵�Ļ�����ʵ�����ͬ����v[k]*a[abs(v[k])<0)���ʾk��˵�ѣ���k����lLie�����У�
	������ɺ��ж�lie���飬���˵����������2����������˵�ѵ���һ���Ǻ���һ���ǻ���
	����a[lie[0]]+a[lie[1]]==0)��ʾ�������⣬��ʱ���i��j��return,����������no solution~ */
			} 
		}
	}
	cout<<"No Solution";
	return 0;
 } 
