#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
int tmp[1010];
//8
//49 38 65 97 76 13 27 49 
void Merge(int a[],int low,int mid,int high){

	int i=low;
	int j=mid+1;
	int t=0;
	while(i<=mid&&j<=high){
		if(a[i]<a[j])tmp[t++]=a[i++];
		else tmp[t++]=a[j++];	
	}
	while(i<=mid)tmp[t++]=a[i++];
	while(j<=high)tmp[t++]=a[j++];
	t=0;
	while(low<=high)
		a[low++]=tmp[t++];
	
}
void MergeSort(int a[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		MergeSort(a,low,mid);
		MergeSort(a,mid+1,high);
		Merge(a,low,mid,high);
	}
}
int main()
{
	cin>>n;
	int a[n+1];
//	int tmp[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	MergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
 } 
