#include<cstdio>
int main()
{
	void inv(int *x,int n);
	int i,arr[10];
	int *p=arr;
	for(i=0;i<10;i++,p++)
	scanf("%d",p);
	p=arr;
	inv(p,10);
	for(p=arr;p<arr+10;p++)
		printf("%d",*p);
	return 0;
 } 
 void inv(int *x,int n){
 	int *p,m,temp,*i,*j;
 	m=(n-1)/2;
 	i=x;j=x+n-1;
	for(;i<=x+m;i++,j--){
		temp=*i;
		*i=*j;//
		*j=temp;
	} 
	return ;
 }
