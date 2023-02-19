#include<iostream>
using namespace std;
typedef long long LL;
int main()
{
	int n;
	cin>>n;
	LL maxn=0;
	LL max_d;
	int length=1,depth=1; 
	for(int i=0;i<n;){  //这个for控制节点的个数  小于n 
		LL sum=0;
		for(int j=0;j<length&&i<n;j++,i++){  //输入每行的节点 
			int x;
			cin>>x;
			sum+=x;
		}
		if(sum>maxn){
			maxn=sum;
			max_d=depth;
		}
		
		depth++;
		length*=2;
	}
	
	
	cout<<max_d<<endl;
	return 0;
}
