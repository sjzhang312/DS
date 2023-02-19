#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	string s;

	getline(cin,s);
	char a[1010];
	int sum[1010];
	int count=0;
	for(int i=0;i<s.length();i++){
		int flag=1;
		if(s[i]>='A'&&s[i]<='Z')
		s[i]+=32;
		if(s[i]>='a'&&s[i]<='z'){
		for(int j=0;j<count;j++){
			if(s[i]==a[j]){
			flag=0;
			sum[j]++;	
			}
		}
		if(flag){
		a[count]=s[i];
		sum[count]=1;
		count++;
		}
		}
		
	}
	
	
	
	
	int max=0,t;
	char v;
	for(int i=0;i<count;i++){
		if(sum[i]>max){
			max=sum[i];
			v=a[i];
		}
		else if(sum[i]==max){
			if(a[i]<v){
			max=sum[i];
			v=a[i];	
			}
		}
	}
	cout<<v<<" "<<max;
}
