#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
int main()
{
	int a[5];
	//∏≥≥ı÷µ0
	memset(a,-1,sizeof(a));
	for(int i=0;i<5;i++)cout<<*(a+i);
	cout<<endl;
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for(int i=0;i<n;i++){
		cout<<*(a+i);
	}
 } 
