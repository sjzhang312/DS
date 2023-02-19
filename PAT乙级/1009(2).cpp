#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int num=0;
	char ans[90][90];
	while(scanf("%s",ans[num])!= EOF)num++;
	for(int i=num-1;i>=0;i--){
		cout<<ans[i];
		if(i>0)cout<<" ";
	}
 } 
