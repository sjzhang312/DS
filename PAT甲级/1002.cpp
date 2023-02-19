#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	unordered_map<int,float> m;
	int t=0,k,n;
	float an;
	vector<int>flag(1010,1);
	for(int i=0;i<2;i++){
		
		scanf("%d",&k);
		for(int j=0;j<k;j++){
	
			scanf("%d%f",&n,&an);
			if(flag[n]==1){
				t++; 
				flag[n]=0;
			}
			m[n]+=an;
		}
	}
	printf("%d",t);
	for(int i=1000;i>=0;i--){	
		if(m[i]!=0.0)
			printf(" %d %.1f",i,m[i]);
	}
	return 0;
}
