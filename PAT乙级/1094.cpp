#include<iostream>
#include<string>
using namespace std;
bool IsPrime(int n){
	if(n==0||n==1)
	return false;
	for(int i=2;i*i<=n;i++)
	if(n%i==0)
	return false;
	return true;
}
int main()
{
	int l,k;
	string s;
	cin>>l>>k>>s;
	for(int i=0;i<=l-k;i++){
        //string t=s.substr(i,k);从第i个数开始向后截取k个元素 
        //stoi atoi都是C++的字符处理函数，把数字字符串转换成int型 
		//stoi()会做范围检查，默认范围是在int的范围内的，如果超出范围的话则会runtime error！
		//atoi()不会做范围检查，如果超出范围的话，超出上界，则输出上界，超出下界，则输出下界
		string t=s.substr(i,k);
		int num=stoi(t);
		if(IsPrime(num)){
			cout<<t;
			return 0;//结束 
		}
	}
	cout<<"404\n";
	return 0; 
}
