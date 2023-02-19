#include<cstdio>
int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
//	for(i=0;i<10;i++)
//	printf("%d ",*(a+i));
	int *p;
	for(p=a;p<(a+10);p++)
		printf("%d",*p);
	return 0;
 } 
