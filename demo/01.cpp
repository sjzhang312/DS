#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char ch;
	while(cin>>ch){
		if(ch>='a'&&ch<='z')
			printf("1\n"); 
		else 
			printf("0\n");
	}
	return 0;
 } 
