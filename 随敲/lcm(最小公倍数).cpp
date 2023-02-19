#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int lcm(int a,int b){
	if(a%b==0) return b;
	return lcm(b,a%b);
//	return a%b==0?b:lcm(b,a%b); 
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<n/lcm(n,m)*m;
	
	return 0;
 } 
