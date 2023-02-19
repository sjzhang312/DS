#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	string s,a,b,ans;
	cin>>s>>a>>b;
	ans=s;
	string ss1(s.length()-a.length(),'0');
	a=ss1+a;
	string ss2(s.length()-b.length(),'0');
	b=ss2+b;
	int carry=0,flag=0;
	for(int i=s.length()-1;i>=0;i--){
		int mod=s[i]=='0'?10:s[i]-'0';
		ans[i]=(a[i]-'0'+b[i]-'0'+carry)%mod+'0';
		carry=(a[i]-'0'+b[i]-'0'+carry)/mod;
	}
	if(carry!=0)ans='1'+ans;
	for(int i=0;i<ans.size();i++){
		if(ans[i]!='0'||flag==1){
			flag=1;
			cout<<ans[i];
		}
	}
	if(flag==0)
	cout<<0;
	
}
