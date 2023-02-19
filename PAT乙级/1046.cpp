#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int a1,a2,b1,b2,jia=0,yi=0;
	for(int i=0;i<N;i++){
		cin>>a1>>a2>>b1>>b2;
		int count=a1+b1;
		if(a2==count&&b2!=count)
		yi+=1;
		else if(b2==count&&a2!=count)
		jia+=1;
		else if(a2!=count&&b2!=count)
		continue;
		else if(a2==count&&b2==count)
		continue;
	}
	printf("%d %d",jia,yi);
}
