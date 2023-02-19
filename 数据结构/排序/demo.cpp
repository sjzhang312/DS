#include<iostream>
using namespace std;
int a[5]={1,2,3,4}; 
void swap(int *a){
	*a=9;
	*(a+1)=9;
}
int main()
{
//	for(int i=0;i<5;i++){
//		cin>>a[i];
	swap(a);
	cout<<a[0] <<" "<<a[1];
}
