//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#define max 1010;
//using namespace std;
//int main()
//{
//	char a[1010],b[10]={0};
//	cin>>a;
//	int n=strlen(a);
//	for(int i=0;i<n;i++){
//	if(a[i]=='0')	b[0]+=1;
//	else if(a[i]=='1')b[1]+=1;
//	else if(a[i]=='2')b[2]+=1;
//	else if(a[i]=='3')b[3]+=1;
//	else if(a[i]=='4')b[4]+=1;
//	else if(a[i]=='5')b[5]+=1;
//	else if(a[i]=='6')b[6]+=1;
//	else if(a[i]=='7')b[7]+=1;
//	else if(a[i]=='8')b[8]+=1;
//	else if(a[i]=='9')b[9]+=1;
//	}
//
//	for(int i=0;i<=9;i++){
//		if(b[i])
//		printf("%d:%d\n",i,b[i]);
//	}
//}


#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	int a[10]={0};
	string n;
	cin>>n;
	for(int i=0;i<n.length();i++){
		int num=n[i]-'0';
		a[num]++;
	}
	for(int i=0;i<=9;i++){
		if(a[i]>0)
		printf("%d:%d\n",i,a[i]);
	}
} 
