#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	string ss;
	cin>>ss;
	int P=0,A=0,T=0,e=0,s=0,t=0;
	for(int i=0;i<ss.length();i++){
		if(ss[i]=='P')
		P++;
		if(ss[i]=='A')
		A++;
		if(ss[i]=='T')
		T++;
		if(ss[i]=='e')
		e++;
		if(ss[i]=='s')
		s++;
		if(ss[i]=='t')
		t++;
	}
	while(P!=0||A!=0||T!=0||e!=0||s!=0||t!=0){
					if(P!=0){
		cout<<"P";
		P--;
	}
	if(A!=0){
		cout<<"A";
		A--;
	}
	if(T!=0){
		cout<<"T";
		T--;
	} 
	if(e!=0){
		cout<<"e";
		e--;
	} 
	if(s!=0){
		cout<<"s";
		s--;
	}
	if(t!=0){
		cout<<"t";
		t--;
	}
	}
}
