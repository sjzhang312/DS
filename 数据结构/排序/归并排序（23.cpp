#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[11];
int b[11];
void Merge(int a[],int l1,int l2,int r1,int r2){
	for(int i=l1;i<=r2;i++)
		b[i]=a[i];
	int k=l1;
	while(l1<=l2 && r1<=r2){
		if(b[l1]<=b[r1]){
			a[k]=b[l1];
			l1++;
		}
		else{
			a[k]=b[r1];
			r1++;
		}
		k++;
	}
	while(l1<=l2)
		a[k++]=b[l1++];
	while(r1<=r2)
		a[k++]=b[r1++];	
}

void MergeSort(int a[],int left,int right){
	if(left<right){
		int mid=(left+right)/2;
		MergeSort(a,left,mid);
		MergeSort(a,mid+1,right);
		Merge(a,left,mid,mid+1,right);
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	MergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
} 
