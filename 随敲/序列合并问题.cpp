#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int C[10],index=0,i=0,j=0;
int merge(int a[],int b[],int c[],int n,int m){
	while(i<n&&j<m){
		if(a[i]<=b[j]){
			c[index++]=a[i++]; 
		}else{
			c[index++]=b[j++];
		}
	}
	while(i<n)c[index++]=a[i++];
	while(j<m)c[index++]=b[j++];
	return index;
}
int main()
{
	int A[]={12,33,57,66},B[]={18,27,64};
	int n=sizeof(A)/sizeof(int);
	int m=sizeof(B)/sizeof(int);
//	cout<<n<<m<<endl;
	merge(A,B,C,n,m);
	for(int i=0;i<index;i++)
	cout<<C[i]<<" ";
}
