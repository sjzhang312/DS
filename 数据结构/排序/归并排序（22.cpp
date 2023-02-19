#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
int b[1010];
//8
//49 38 65 97 76 13 27 88

void Merge(int a[],int low,int mid,int high){
	int i,j,k;
	for(k=low;k<=high;k++)b[k]=a[k];
	
	for(i=low,j=mid+1,k=low;i<=mid && j<=high;k++)
		if(b[i]<b[j])a[k]=b[i++];
		else a[k]=b[j++];
	while(i<=mid)a[k++]=b[i++];
	while(j<=high)a[k++]=b[j++];
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
