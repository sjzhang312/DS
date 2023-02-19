#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1010;
int a[maxn]={0,1,2,3,4,5,6},m=8;
int main()
{
	int n=6;
//	a[maxn]={1,2,3,4,5,6};
	int i=1,j=6;
	while(i<j){
		if(a[i]+a[j]==m){
			cout<<i<<" "<<j<<endl;
			i++;
			j--;
		}else if(a[i]+a[j]<m)i++;
		else j--;
	}
}
