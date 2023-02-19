#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int flag=0;
	int hash[200]={0};
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='+')
		flag=1;
		if(islower(s1[i]))
			hash[toupper(s1[i])]=1;
		else if(isupper(s1[i]))
		hash[tolower(s1[i])]=1;
		hash[s1[i]]=1;
	}
	for(int i=0;i<s2.size();i++){
		if(hash[s2[i]]==0){
			if(flag){
				if(s2[i]<'A'||s2[i]>'Z')
			    cout<<s2[i];
			}
			else
			cout<<s2[i];
		}
	}
}
