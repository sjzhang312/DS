#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void swap(int* &p1,int* &p2){
	int *temp=p1;
	p1=p2;
	p2=temp;
}
int main()
{
	int a=1,b=2;
	int* p1=&a,*p2=&b;//ȡab�ĵ�ַ��ֵ��ָ�����p1,p2 
	swap(p1,p2);
	cout<<*p1<<*p2<<endl;//*p1 ���*����ȡp1ָ����ַ������ 
	cout<<a<<b;
}
