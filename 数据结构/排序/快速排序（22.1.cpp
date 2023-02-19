//测试数据
//8
//49 38 65 97 76 13 27 49 

/*
第一次：38  
*/
#include<iostream>
using namespace std;

int partition(int a[],int low,int high){
	int pivot=a[low];
	while(low<high){
		while(low<high&&a[high]>=pivot)high--;
		a[low]=a[high];
		while(low<high&&a[low]<=pivot)low++;
		a[high]=a[low];
	}
	a[low]=pivot;
	return low;
}
void QuickSort(int a[],int low,int high){
	if(low<high){
		int pivotpops=partition(a,low,high);
		QuickSort(a,low,pivotpops-1);
		QuickSort(a,pivotpops+1,high);
	} 
}
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	QuickSort(a,0,n-1);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
 } 
