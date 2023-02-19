#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;  
int months[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int ans=months[2]+=((2000%4==0&&2000%100!=0)||(2000%400==0));
	cout<<ans;
 } 
