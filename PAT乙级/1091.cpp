#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int M,a,t,s;
	cin>>M;
	 for(int i=0;i<M;i++){
	 	cin>>a;
	 	int ss=a,flag=0;;
		 int count=0;
	 	 while(a!=0){
	 	 	a/=10;
	 	 	count++;
		  }
		  
	 	for(int j=1;j<10;j++){
	 	
	 		int sum=0,n=1;
	 		int number=count;
	 		s=j*ss*ss;
	 		int sss=s;
//	 		printf("%d %d ",s,number);
	 		while(number!=0){		
	 			t=s%10;
	 			s/=10;	
				t=n*t;	
	 			sum+=t;
	 			n*=10;
	 			number--;
			 }
//			 printf("%d\n",sum);
			 if(sum==ss){
				printf("%d %d\n",j,sss);
				flag=1;
				break;
			 } 
		 }
		 if(flag==0)
		 printf("No\n");
	 }
}
