#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	
	int n1=b.length();
	int n2=a.length();
	int count=0,FLAG=1,t=0;
	for(int i=0;i<n1;i++){
		int flag=1;
		for(int j=0;j<n2;j++){
			if(b[i]==a[j]){//找到 
			for(int jj=j;jj<n2-1;jj++)
			a[jj]=a[jj+1]; 
			n2--;
			flag=0;
			break;
			}
		}
		if(flag){//说明在a字符串中找不到b字符串 
			FLAG=0;
			t++; 
		}
	}
	if(FLAG)
	cout<<"Yes"<<" "<<n2;
	else
	cout<<"No"<<" "<<t;
	return 0;
	
 } 
