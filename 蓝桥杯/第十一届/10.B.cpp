#include<iostream>
using namespace std;

char str[27] = {0,'A','B','C','D','E','F','G','H','I','J','K'
   			,'L','M','N','O','P','Q','R','S','T','U','V',
   			'W','X','Y','Z'};
int main()
{
	int num;
	cin>>num;
	string ans="";
	while(num){
		if(num%26==0)ans+='Z'; 
		else ans+=str[num%26];
		num/=26;
	}
	cout<<ans;
	return 0;
}
