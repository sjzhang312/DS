#include<iostream> 
#include<algorithm>
#include<cstring>
using namespace std;
/*
≤‚ ‘ ˝æ›
8
49 38 65 97 76 13 27 49 
*/
void swap(int& a,int& b){
	int temp=a;
	a=b;
	b=temp;
}
void SelectSort(int a[],int n){
	int min,i,j;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;	
			}
		}
		if(min!=i)swap(a[i],a[min]);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++)cin>>a[i];
	SelectSort(a,n);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
