#include<iostream>
using namespace std;
typedef long long LL; 
bool check(int x){
	while(x){
		int res;
		res=x%10;
		if(res==2||res==0||res==1||res==9)return true;
		x/=10;
	}
	return false;
}
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(check(i)){
			sum+=i;
		}
	}
	printf("%d",sum);
 } 
