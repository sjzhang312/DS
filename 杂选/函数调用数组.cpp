#include<iostream>
using namespace std;
void f1(int data[],int n){
	for(int i=0;i<n;i++)
	cout<<data[i]<<" ";
}
int main()
{
	int data[10]={1,3,5,7,9,16,24,36,45,59};
	f1(data,10);
}
