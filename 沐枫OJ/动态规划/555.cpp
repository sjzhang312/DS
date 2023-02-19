#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;
const int maxn=1010;
int f[maxn][maxn];
/*
f[i][j]表示前i个j重量能秤出不同重量的个数
1、f[i][j]=f[i-1][j]+a[i]*b[i]
2、f[i][j]=f[i-1][j] 
*/ 
int a[10]={1,2,3,5,10,20};
int b[10]; 
int main()
{
	int a[7]={0,1,2,3,5,10,20};

	for(int i=1;i<=6;i++)cin>>b[i];
	
	
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			if(b[i]!=0){
				f[i][j]=f[i-1][j]+a[i]*b[i];
			}
			else f[i][j]=f[i-1][j];
		}
	}
	
//	cout<<endl;
//	for(int i=1;i<=6;i++){
//		for(int j=1;j<=6;j++)
//			cout<<f[i][j]<<" ";
//		cout<<endl;	
//	}
	printf("Total=%d",f[6][6]);
	return 0;
 } 
