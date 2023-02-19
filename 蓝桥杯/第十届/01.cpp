#include<iostream>
using namespace std;
int a[20190330]={1,1,1};
int main()
{
	for(int i=3;i<20190324;i++){
		a[i]=(a[i-1]+a[i-2]+a[i-3])%10000;
	}
	cout<<a[20190323];
	printf("%ld",a[20190323]);
	return 0;
}
