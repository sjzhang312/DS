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
	/*实际上，对数组元素a[i]就是按 *(a+i)处理的，
	即按数组首元素的地址加上相对位移量得到要找的元素的地址,然后找出该单元中的内容 
	*/ 
}
