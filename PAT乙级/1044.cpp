#include<iostream>
#include<cstring>
using namespace std;
string a[13]= {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string b[13]= {"#", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
string s;
void func1(int t){
	if(t==0)cout<<a[t];
	if(t/13)cout<<b[t/13];
	if(t%13!=0){
		if(t/13)
		cout<<" ";
		cout<<a[t%13];
	}
}
void func2(){
	int k1=0,k2=0;
	string s1=s.substr(0,3),s2;
	if(s.size()>4)s2=s.substr(4,3);
	for(int i=0;i<=12;i++){
		if(s1==b[i])
		k1=i;
		if(s2==a[i]||s1==a[i])
		k2=i;
	}
	cout<<k1*13+k2;
} 
int main()
{
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,s);
		if(s[0]>='0'&&s[0]<='9')
		func1(stoi(s));
		else 
		func2();
		cout<<endl;
	} 
	return 0;
}

