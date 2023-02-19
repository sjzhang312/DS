#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int sum=0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z')
		sum+=s[i]-'a'+1;
		else if(s[i]>='A'&&s[i]<='Z')
		sum+=s[i]-'A'+1;
	} 
	int sum0=0,sum1=0;
	while(sum!=0){
		if(sum%2==0)
		sum0+=1;
		else
		sum1+=1;
		sum/=2;
	}
	cout<<sum0<<" "<<sum1;
}
