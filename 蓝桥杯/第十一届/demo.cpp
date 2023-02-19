#include<iostream>
using namespace std;
int main()
{
	string s,mins,s3;
	int t;
	cin>>s;
	cin>>t;
	while(t--){
		mins=s;//
		for(int i=0;i<s.size();i++){
			s3=s;
			string s1=s3.erase(i,1);
			if(s1<mins){
				mins=s1;
			}
		}
		s=mins;
		
	}
	cout<<s;
}
