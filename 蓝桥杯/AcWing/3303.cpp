#include<iostream>
#include<vector>
#include<map> 
using namespace std;
string s;
int a[1010];
map<char,int>mp;
int maxn=-1;
char maxc;
int main()
{
	cin>>s;
	for(int i=0;i<s.length();i++){
		mp[s[i]]+=1;
		if(mp[s[i]]>=maxn){
			maxn=mp[s[i]];	
		}
	}
	for(int i=0;i<26;i++){
		if(mp[char('a'+i)]==maxn){
			cout<<char('a'+i)<<endl;
			cout<<maxn<<endl;
			return 0;
		}
	}

}
