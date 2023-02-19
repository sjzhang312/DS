#include<iostream>
using namespace std;
int main()
{	
	/*
		n--是先判断后加减
		--n是先加减后判断 
	*/ 
	int n=2,m=2;
	while(n--){//while循环函数体要求为真，即（n>=1) 
		cout<<n;
	}//执行过程:1.先判断 n=2>=1 ,然后减1，输出1;   2.  1>=1,然后减1，输出0  
	 
	cout<<endl;
	
	while(--m){
		cout<<m;
	}//执行过程:1.先减1,然后判断m=1>=1 ,输出1. 结束 
	
	return 0;
}
