#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N;
	char c;
	cin>>N>>c;
	int t=double(N*0.5+0.5); 
	//��һ�� 
	for(int i=0;i<N;i++)
	printf("%c",c); 
	printf("\n");
	//�м� 
	for(int i=0;i<t-2;i++){
		printf("%c",c);
		for(int j=0;j<N-2;j++)
		printf(" ");
		printf("%c",c);
		printf("\n");
	}
	// ���һ�� 
	for(int i=0;i<N;i++)
	printf("%c",c); 
 } 
