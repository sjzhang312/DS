#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(6);//����һ��6����С��int ��vector����
	int k=6;
	for(int i=0;i<k;i++){
		cin>>v[i];
	} 
	reverse(v.begin(),v.begin()+k);
	for(int i=0;i<6;i++){
		cout<<v[i]<<" ";
	}
	
 } 
