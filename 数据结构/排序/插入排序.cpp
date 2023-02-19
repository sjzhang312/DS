#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=110;
int a[maxn];
/*
8
49 38 65 97 76 13 27 49
*/
void insertSort(int a[],int n){
	int i,j;
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			int tmp=a[i];
			for(j=i-1;a[j]>tmp;j--){
				a[j+1]=a[j];
			}
			a[j+1]=tmp;
		}
	} 
}


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
 } 
