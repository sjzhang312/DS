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
	for(int i=0;i<n;){  //���for���ƽڵ�ĸ���  С��n 
		LL sum=0;
		for(int j=0;j<length&&i<n;j++,i++){  //����ÿ�еĽڵ� 
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
