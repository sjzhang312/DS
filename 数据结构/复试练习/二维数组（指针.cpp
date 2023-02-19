#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define row 10 
#define col 10
//int c[row][col];//静态创建

void print1(int **c,int m,int n){//非动态创建的二维数组的首地址的类型其实是一个行指针
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<c[i][j]<<" ";
		cout<<endl;
	}
}
int main(){
	int m,n;
	cin>>m>>n;//m是行  
	
//	int (*c)[n]=(int(*)[n])malloc(m*n*sizeof(int));
	int **c=new int *[m];
	for(int i=0;i<m;i++)
		 c[i]=new int[n];
		 
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>c[i][j];
	print1(c,m,n);
	delete []c; 
	return 0;
		
} 
