#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define row 10 
#define col 10
//int c[row][col];//��̬����

void print1(int **c,int m,int n){//�Ƕ�̬�����Ķ�ά������׵�ַ��������ʵ��һ����ָ��
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<c[i][j]<<" ";
		cout<<endl;
	}
}
int main(){
	int m,n;
	cin>>m>>n;//m����  
	
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
