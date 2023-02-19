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
	int i,j,high,low;
	for(int i=2;i<=n;i++){
		a[0]=a[i];
		low=1;high=i-1;
		while(low<=high){
			int mid=(low+high)/2;
			if(a[mid]>a[0])high=mid-1;
			else low=mid+1;
		}//最后while循环结束后一定满足low=high-1 
		for(j=i-1;j>=low;j--)
			a[j+1]=a[j];
		a[low]=a[0]; 
	}
}







int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	insertSort(a,n);
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
 } 
