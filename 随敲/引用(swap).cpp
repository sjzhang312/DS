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
	int* p1=&a,*p2=&b;//取ab的地址赋值给指针变量p1,p2 
	swap(p1,p2);
	cout<<*p1<<*p2<<endl;//*p1 这个*代表取p1指代地址的数据 
	cout<<a<<b;
}
