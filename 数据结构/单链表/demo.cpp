#include<iostream>
using namespace std;
int main()
{	
	/*
		n--�����жϺ�Ӽ�
		--n���ȼӼ����ж� 
	*/ 
	int n=2,m=2;
	while(n--){//whileѭ��������Ҫ��Ϊ�棬����n>=1) 
		cout<<n;
	}//ִ�й���:1.���ж� n=2>=1 ,Ȼ���1�����1;   2.  1>=1,Ȼ���1�����0  
	 
	cout<<endl;
	
	while(--m){
		cout<<m;
	}//ִ�й���:1.�ȼ�1,Ȼ���ж�m=1>=1 ,���1. ���� 
	
	return 0;
}
