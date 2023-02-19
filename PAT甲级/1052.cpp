#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool isPrime(int n){
	if(n==1||n==0)
	return false;
	for(int i=2;i*i<=n;i++)
	if(n%i==0)
	return false;
	return true;
}
int main()
{
	int L,K;
	cin>>L>>K;
	string s;
	cin>>s;
	for(int i=0;i<=L-K;i++){
		string t=s.substr(i,K);
		int num=stoi(t);
		if(isPrime(num)){
			cout<<t;
			return 0;
		}
	}
	cout<<"404\n";

 } 
