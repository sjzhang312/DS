#include<iostream>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	//while((c = getchar()) != '\n'){  //用输入是否为'\n'来判断字符串输入是否结束
	string s=a+b;
	int hash[200]={0};
	//用数组hash标记一下是否是第一次输出即可（字符本身是一个ASCII码值，可当作整数用）
	for(int i=0;i<s.size();i++){
		if(hash[s[i]]==0)
		cout<<s[i];
		hash[s[i]]=1;
	}
	return 0;
}
