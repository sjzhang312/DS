#include<iostream>
#include <cstdio>
#include <cstring>
#include<cctype>
using namespace std;
int main()
{
	int N;
	string s;
	cin>>N;
	getchar();//吃掉上一个回车符 
	for(int i=0;i<N;i++){
		getline(cin,s);
		bool havechar=false,havenumber=false,havepass=false;
		if(s.length()<6){
			cout<<"Your password is tai duan le."<<endl;//密码长度太短 
			
		}
		else{
			
			for(int j=0;j<s.length();j++){
				if(!isalnum(s[j])&&s[j]!='.'){
				havepass=true;
				break;
				}
				if(isalpha(s[j]))
				havechar=true;
				else if(s[j]<='9'&&s[j]>='0')
				havenumber=true;
				
			}
			if(havepass){
			cout<<"Your password is tai luan le."<<endl;
			continue;	
			}
			
			if(!havechar)
			cout<<"Your password needs zi mu."<<endl;
			if(!havenumber)
			cout<<"Your password needs shu zi."<<endl;
			if(havenumber&&havechar)
			cout<<"Your password is wan mei."<<endl;
		
		}
		
	}
}
