//  07/07/21 20:00
#include<iostream> 
#include<algorithm>
#include<cstring>
using namespace std;
/*
测试数据
8
49 38 65 97 76 13 27 49 
*/

//调整大根堆 
void HeadAdjust(int a[],int k,int len){
	int i;
	a[0]=a[k];
	for(i=2*k;i<=len;i*=2){
		if(i<len&&a[i]<a[i+1])
			i++;
		if(a[0]>a[i])break;
		else{
			a[k]=a[i];
			k=i;
		}
	}
	a[k]=a[0];
} 
//建立大根堆 
void BuildMaxHeap(int a[],int len){
	for(int i=len/2;i>0;i--)
	HeadAdjust(a,i,len);
} 
void Swap(int& a,int& b){
	int temp=a;
	a=b;
	b=temp;
}
//堆排序 
void HeapSort(int a[],int len){
	BuildMaxHeap(a,len);
	for(int i=len;i>1;i--){
		Swap(a[i],a[1]);
		HeadAdjust(a,1,i-1);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=1;i<=n;i++)cin>>a[i];
	HeapSort(a,n);
	
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
}
