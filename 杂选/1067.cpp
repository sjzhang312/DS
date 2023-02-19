#include<iostream>
#include<cstring>
#include<set>
using namespace std;
int main()
{
	string s;
	int n;
	cin>>s>>n;
	getchar();
	while(n--){
		string s1;
		getline(cin,s1);
		if(s1=="#")
		return 0;
		if(s1==s){
			cout<<"Welcome in"<<endl;
			return 0;
		}
		else
		printf("Wrong password: %s\n",s1.c_str());
	} 
	cout<<"Account locked"<<endl;
	return 0;
}
