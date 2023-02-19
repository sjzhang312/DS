#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int ans;
	for(int i=0;i<s.length();i++){
//		if(s[i]-'0'>=0&&s[i]-'0'<=9){
//			ans=s[i]-'0';
//			while(ans--){
//				cout<<s[i-1];
//			}
//		}
		if(s[i]>='A'&&s[i]<='z'){
			if(s[i+1]>='1'&&s[i+1]<='9'){
				ans=s[i+1]-'0';
				while(ans--)cout<<s[i];
			}
			else cout<<s[i];
		}

	}
	return 0;
}
