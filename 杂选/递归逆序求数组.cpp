#include<iostream>
using namespace std;
int a[10],n;
void f(int a[],int i){
	if(n==i) return ;

	f(a,i+1);
	cout<<a[i]<<" "; 
}
int main(){
	cin>>n;
	for( int i=0;i<n;i++)
        cin>>a[i];
	f(a,0);
	return 0;
}
