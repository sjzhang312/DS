#include<iostream>
using namespace std;
int main(){
	int a,b,t;
	cin>>a>>b>>t;
	int c=(b+t)/60;
	int d=(b+t)%60;
	cout<<(a+c)%24<<endl;
	cout<<d<<endl;
} 
