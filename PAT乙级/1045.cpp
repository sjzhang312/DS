#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int N;
	scanf("%d",&N); 
	int a[100010],count=0,b[100010],i,j,v[100010],max=0;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	sort(a,a+N);
	for(i=0;i<N;i++){
		if(a[i]==b[i]&&b[i]>max)
		v[count++]=b[i];
		if(b[i]>max)
		max=b[i];
	} 
	printf("%d\n",count);
	for(i=0;i<count;i++){
		if(i!=0)
		printf(" ");
		printf("%d",v[i]);
	}
	printf("\n");
}
