#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
{
	unordered_map<int,float> m;
	int t=0,k,n;
	float an;
	for(int i=0;i<2;i++){
		scanf("%d",&k);
		for(int j=0;j<k;j++){
	
			scanf("%d%f",&n,&an);
			m[n]+=an;
		}
	}
	for(int i=0;i<1001;i++)
	if(m[i]!=0)t++;
	printf("%d",t);
	for(int i=1000;i>=0;i--){	
		if(m[i]!=0)
			printf(" %d %.1f",i,m[i]);
	}
	return 0;
}
