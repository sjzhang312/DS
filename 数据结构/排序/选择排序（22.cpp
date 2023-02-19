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
void selectSort(int a[],int n){
	for(int i=0;i<n;i++){
		int tmp=i;//最小值下标 
		for(int j=i+1;j<n;j++){
			if(a[j]<a[tmp])
				tmp=j;
		}
		swap(a[i],a[tmp]);
	}
}


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	selectSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
 } 
