#include<iostream>
using namespace std;
#include<time.h>
#define n 10
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a[n],i,j,t;
	bool flag=false;
    srand((unsigned)time(NULL));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100+1;
        printf("%d ",a[i]);
    }
    cout<<endl;
    //Ã°ÅÝÅÅÐò
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	} 
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
 } 
