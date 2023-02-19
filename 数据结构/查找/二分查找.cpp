#include<iostream>
#include<cstring>
using namespace std;
int a[12]={7,10,13,16,19,29,32,33,37,41,43};
int Binary_Search(int a[],int size,int key){
	int low=0,high=size-1,mid;
//	cout<<high<<endl;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==key)return mid;
		else if(a[mid]>key)high=mid-1;
		else low=mid+1;
	}
	return -1;
}

int main()
{

//	cout<<sizeof(a)/sizeof(int)<<endl;
	int key;
	cin>>key;
	cout<<Binary_Search(a,sizeof(a)/sizeof(int),key);
 } 
