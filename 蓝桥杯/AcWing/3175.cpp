#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
typedef long long ll;
using namespace std;
int main()
{
	int k;
	cin>>k;
	getchar();
	string s;
	vector<int>Alice,Bob;
	string temp="";
	getline(cin,s);
	s+='.';

		for(int i=0;i<s.size();i++){
			if(!isalpha(s[i])){
				if(temp=="Alice") Alice.push_back(i-temp.size());
				else if(temp=="Bob")Bob.push_back(i-temp.size());
				temp=""; 
			}
			else temp+=s[i];
		}
//	cout<<Alice[0]<<" "<<Bob[0]<<endl; 
	 ll ans=0;
	 int la=Alice.size();
	 int lb=Bob.size();
	 int t1=0,t2=0;
	 for(int i=0;i<la;i++){
	 	while(t1<lb&&Bob[t1]<Alice[i]-3-k)t1++;
	 	while(t2<lb&&Bob[t2]<=Alice[i]+5+k)t2++;
	 	if(t2-t1>0)ans+=t2-t1;
	 }
	 cout<<ans<<endl;
	 return 0;
}
