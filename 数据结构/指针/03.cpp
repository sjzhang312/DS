#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,3,5,7,9,11,13,15,17,19};
	int *p;
	p=a;
	p=p+1;
	cout<<a<<endl<<*p;
	cout<<*(p+3);
	/*ʵ���ϣ�������Ԫ��a[i]���ǰ� *(a+i)����ģ�
	����������Ԫ�صĵ�ַ�������λ�����õ�Ҫ�ҵ�Ԫ�صĵ�ַ,Ȼ���ҳ��õ�Ԫ�е����� 
	*/ 
}
