#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N,D,t=0,tt=0,K;
	
	double e,a[1010];
	cin>>N>>e>>D;
	for(int i=0;i<N;i++){
		cin>>K;
		int count=0;
		for(int j=0;j<K;j++){
			cin>>a[i];
			if(a[i]<e){
				count++;
			}
		}
		if(K>D&&(count>K/2)){
			tt++;
		} 
		else if(count>K/2){
			t++; 	
		}
	}
	double sum=t*1.0/(N*1.0);
	double sumtt=tt*1.0/N;
	printf("%.1lf%% %.1lf%%",sum*100,sumtt*100);
//	double s=t*1.0/(N*1.0);
//	printf("%.lf",s); 
	
	
}
