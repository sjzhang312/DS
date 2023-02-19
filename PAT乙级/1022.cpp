#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int A,B;
	int num[1000];
	int D; 
	cin>>A>>B>>D;
	int count=A+B;
	int j=0;
while(count/D!=0){
	num[j]=count%D;//3 0 0
	j+=1;//1 2 3 
	count/=D;//72	9  1

}
	
num[j]=count%D; 
for(int i=j;i>=0;i--)
printf("%d",num[i]);
}
