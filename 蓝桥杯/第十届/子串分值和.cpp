#include<iostream>
#include<cstring>
#include<map>
using namespace std;
typedef long long ll;
int main()
{
//	bool flag[100010]={flase};
	ll ans=0;
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++){
		
		int k=0;
//		map<char,int>mp;
		while(n-i-k){
			k++;
			string s1=s.substr(i,k);
//     		cout<<s1<<endl;
			if(s1.length()==1){
				ans++;
			}else{
			map<char,int>mp; 
			for(int j=0;j<s1.length();j++){
				if(mp[s1[j]]==0){
					mp[s1[j]]=1;
					ans++;
				} 	
//			   else if(mp[s1[j]]==1){
//					ans--;
//					mp[s1[j]]==-1;
//				}
			}
			}
//			for(int j=0;j<26;j++){
//			if(mp[char('a'+j)]==1)ans++;
//			}
//			for(int j=0;j<s1.length();j++){
//				if(mp[s1[j]]==1)ans++;
//			} 
//			cout<<ans<<endl;
			}

			
		}
//		mp.clear();
	
	cout<<ans;
 } 
