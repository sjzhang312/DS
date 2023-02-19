#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define max 100
int a[max];
int partition(int a[],int low,int high){
	int tmp=a[low];
	while(low<high){
		while(low<high && a[high]>=tmp)high--;
		a[low]=a[high];
		while(low<high && a[low]<=tmp)low++;
		a[high]=a[low];	
	}
	a[low]=tmp;
	return  low;
}
void Quicksort(int a[],int low,int high){
	if(low<high){
		int mid=partition(a,low,high);
		Quicksort(a,low,mid);
		Quicksort(a,mid+1,high); 
	} 
}

//49 34 56 78 32  89 94 17 69 49
// 17 34 32 49 78   89 94 56 69 49
//
int main()
{
	int n;
	cin>>n; 
	for(int i=0;i<n;i++)
		cin>>a[i];
	Quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
 } 
