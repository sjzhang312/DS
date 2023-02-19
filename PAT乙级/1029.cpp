#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	int hash[200]={0};
	int has[200]={0};
	for(int i=0;i<b.size();i++){
		hash[b[i]]=1;
	}
	for(int i=0;i<a.size();i++){
		if(hash[a[i]]==0){
			if(a[i]>='a'&&a[i]<='z')
			a[i]-=32;
			if(has[a[i]]==0)
			cout<<a[i];
			has[a[i]]=1;
			
		}
	}
}
