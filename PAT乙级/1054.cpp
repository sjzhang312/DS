#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,cnt=0;
	char a[50],b[50];
	double temp,sum=0.0;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%s",a);
		sscanf(a,"%lf",&temp);
		//将字符串a以浮点数格式写入temp 
		sprintf(b,"%.2f",temp);
		//将浮点数temp精确到小数点后两位 并且写入字符串b 
		int flag=0;
		for(int j=0;j<strlen(a);j++)
		if(a[j]!=b[j])
		flag=1;
		if(flag||temp<-1000||temp>1000)
		printf("ERROR: %s is not a legal number\n",a);
		else{
			sum+=temp;
			cnt++;
		}
	}
	if(cnt==1)
	printf("The average of 1 number is %.2lf",sum);
	else if(cnt==0)
	printf("The average of 0 numbers is Undefined");
	else 
	printf("The average of %d numbers is %.2lf",cnt,sum/cnt);
 } 
