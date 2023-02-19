#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	
	int C1,C2;
	int second,hour,minute,count;
	cin>>C1>>C2;
	double t=(C2-C1)*1.0/100;
	count=int(t+0.5);
	 hour=int(count*1.0/3600);
	 printf("%02d:",hour);
	 minute=int(count*1.0/60-hour*1.0*60);
	 printf("%02d:",minute);
	 second=count-hour*3600-minute*60;
	 printf("%02d",second);

 } 
