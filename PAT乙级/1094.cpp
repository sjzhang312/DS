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
        //string t=s.substr(i,k);�ӵ�i������ʼ����ȡk��Ԫ�� 
        //stoi atoi����C++���ַ����������������ַ���ת����int�� 
		//stoi()������Χ��飬Ĭ�Ϸ�Χ����int�ķ�Χ�ڵģ����������Χ�Ļ����runtime error��
		//atoi()��������Χ��飬���������Χ�Ļ��������Ͻ磬������Ͻ磬�����½磬������½�
		string t=s.substr(i,k);
		int num=stoi(t);
		if(IsPrime(num)){
			cout<<t;
			return 0;//���� 
		}
	}
	cout<<"404\n";
	return 0; 
}
