#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long ans=0;
	string s;
	getline(cin,s);
	int n=s.length();
	for(int i=0;i<n;i++){
		
		int k=0;
//		map<char,int>mp;
		while(n-i-k){
			k++;
			if(k==1){
				ans++;
				continue;
			} 
			string s1=s.substr(i,k);
//     		cout<<s1<<endl;
//			if(s1.length()==1){
//				ans++;
//			}
			
			int a[100]={0};
			for(int j=0;j<s1.length();j++){
				a[s1[j]-'0']+=1;
			}
//			for(int j=0;j<26;j++){
//			if(mp[char('a'+j)]==1)ans++;
//			}
			for(int j=0;j<s1.length();j++){
				if(a[s1[j]-'0']==1)ans++;
			} 
			
			
//			cout<<ans<<endl;

			
		}
//		mp.clear();
	}
	printf("%lld",ans);
	return 0; 
 } 
