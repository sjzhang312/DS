#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<unordered_map>
#include<cmath>
#include<cctype>
#include<set>
using namespace std;
int gcd(int x,int y){
	if(y==0) return x; 
	return gcd(y,x%y); 
}
int main()
{
	double a,b,c,d,k;
	scanf("%lf/%lf %lf/%lf %lf",&a,&b,&c,&d,&k);
	int flag=1;
	double max,min;
	if((a/b)>=(c/d)){
	max=a/b; 
	min=c/d;
	}
	else{
	max=c/d;
	min=a/b;
	}
	for(int i=1;i<k;i++){
		if((i*1.0/k)>min&&(i*1.0/k)<max){
			int num=(int)k;
			int cnt=gcd(i,num);
			if(cnt==1){
			if(flag!=1)
		    printf(" "); 
			printf("%d/%d",i,num);
			flag=0;
			}
		}
	}
}
