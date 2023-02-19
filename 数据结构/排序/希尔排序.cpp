#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=110;
int a[maxn];
/*
8
49 38 65 97 76 13 27 49

10
49 38 65 97 76 13 27 49 55 04
*/
void ShellSort(int a[],int n){
	int dk,i,j;
	for(dk=n/2;dk>=1;dk=dk/2){
		cout<<dk<<endl;
		for(i=dk+1;i<=n;++i){
			cout<<i<<" ";
			if(a[i]<a[i-dk]){
				a[0]=a[i];
				for(j=i-dk;j>0&&a[0]<a[j];j-=dk){
					a[j+dk]=a[j];
				}
				a[j+dk]=a[0];
			}
		}
		cout<<endl;
		for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		
			
	}
} 

//Ö÷º¯Êý 
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ShellSort(a,n);
	
 } 
