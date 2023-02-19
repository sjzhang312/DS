#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
	//*******快速排序sort************//
	 //递增
	  	bool compare(int a,int b){
		return a<b;
	} 
int main()
{
	//*********请输入一个四位数********// 
	int N;
	int a[4]={0},t1=0,t2=0,t=0;
	scanf("%d",&N);
	

	do{
			if(N%10==N/10%10&&N%10==N/100%10&&N%10==N/1000){
		printf("%04d - %04d = 0000\n",N,N);
		break;
	}
	
		a[0]=N%10;
		a[1]=N/10%10;
		a[2]=N/100%10;
		a[3]=N/1000;
		sort(a,a+5,compare);
//		for(int i=0;i<4;i++)
//		printf("%d",a[i]);
//		printf("\n");
		t1=a[0]+a[1]*10+a[2]*100+a[3]*1000;
//		printf("\n");
		t2=a[3]+a[2]*10+a[1]*100+a[0]*1000;
//		printf("%04d\n",t2);
		N=t1-t2;
		printf("%04d - %04d = %04d\n",t1,t2,N);
	}while(N!=6174);
	return 0;
	
}
		


