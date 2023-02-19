#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double R1,P1,R2,P2,a,b;
	cin>>R1>>P1>>R2>>P2;
	a=R1*R2*cos(P1)*cos(P2)-R1*R2*sin(P1)*sin(P2);
	b=R1*R2*cos(P1)*sin(P2)+R1*R2*sin(P1)*cos(P2); 
	if(fabs(a)<0.01)
	a=0;
	if(fabs(b)<0.01)
	b=0;
	if(b<0)
	printf("%.2lf%.2lfi",a,b);
	else
	printf("%.2lf+%.2lfi",a,b);
}
