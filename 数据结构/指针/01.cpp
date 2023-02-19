#include<cstdio>
int main()
{
	int *p1,*p2,*p,a,b;
	scanf("%d,%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a<b){
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("a=%d,b=%d",a,b);
	printf("max=%d,min=%d\n",*p1,*p2);
	return 0;
 } 
