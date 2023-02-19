#include<iostream>
#include<vector>
using namespace std;
int n=5;
int  main()
{
	vector<int>v(n+1);
	v[1]=1;
	for(int i:v)cout<<i<<" ";
 } 
