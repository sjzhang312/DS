#include<iostream>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	//while((c = getchar()) != '\n'){  //�������Ƿ�Ϊ'\n'���ж��ַ��������Ƿ����
	string s=a+b;
	int hash[200]={0};
	//������hash���һ���Ƿ��ǵ�һ��������ɣ��ַ�������һ��ASCII��ֵ���ɵ��������ã�
	for(int i=0;i<s.size();i++){
		if(hash[s[i]]==0)
		cout<<s[i];
		hash[s[i]]=1;
	}
	return 0;
}
