#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=100;
int a[maxn];
bool flag=false;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void BubbleSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		flag=false;
		for(int j=0;j<n-i;j++){
			if(a[j-1]>a[j]){   //每一趟找到最大的，让最大的沉底 
				swap(a[j-1],a[j]);
				flag=true;
			}
		}
	} 
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	BubbleSort(a,n);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	
 } 
