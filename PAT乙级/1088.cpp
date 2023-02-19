#include<iostream>
#include<cmath>
using namespace std;
int m,x,y;
void print(double t){
	if(m==t)printf(" Ping");
	else if(m<t)printf(" Cong");
	else printf(" Gai");
}
int main()
{
	cin>>m>>x>>y;
	for(int i=99;i>=10;i--){//这种方式解决了如果解不唯一，则以甲的最大值为准进行判断 
		int j=i%10*10+i/10;
		double k=abs(j-i)*1.0/x;
		if(j==y*k){
			cout<<i;
			print(i);print(j);print(k);
			return 0; 
		}
	}
	cout<<"No Solution";
	return 0;
}
