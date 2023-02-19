/*
	Name: 
	Copyright: 
	Author: 
	Date: 17/05/21 19:27
	Description: 
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v1,v2;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	if(v1==v2)cout<<1;
	else cout<<0;
}
