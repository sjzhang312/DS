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
void bubbleSort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
			
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
	bubbleSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
 } 
