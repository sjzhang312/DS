#include<iostream>
#include<vector>
#include<map>
#include<cstring>

using namespace std;
void ifcutinteger(string s){
	int num=stoi(s);
	int k=s.length();
	string  s1=s.substr(0,k/2);
	string  s2=s.substr(k/2,k/2);
	int a=stoi(s1);
	int b=stoi(s2);
	if(a*b!=0&&num%(a*b)==0)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
int main()
{
	int n;
	cin>>n;
	string z;
	for(int i=0;i<n;i++){
		cin>>z;
		ifcutinteger(z);
	}
	return 0;
}

