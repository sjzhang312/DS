#include<iostream> 
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
	stack<string> v;
	string s;
	while(scanf("%s",s.c_str())!=EOF)
	v.push(s.c_str());
	cout<<v.top();
	v.pop();
	while(!v.empty()){
		cout<<" "<<v.top();
		v.pop();
	}
	return 0;
}

