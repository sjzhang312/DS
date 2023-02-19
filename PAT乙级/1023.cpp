#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[10],j=0,b[60];
	for(int i=0;i<10;i++){
		cin>>a[i];
		while(a[i]!=0){
			b[j]=i;
			j++;
			a[i]--;;
		}
	}
	for(int i=0;i<j;i++){
		if(b[i]>0){
			int count=b[i];
			for(int t=0;t<i;t++){
				b[t+1]=b[t];
			}
			b[0]=count;
			break;
		}
	}
		for(int i=0;i<j;i++){
		cout<<b[i];
	} 
}
