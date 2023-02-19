#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int G,S,K,G1,S1,K1,t,t1,repay;
	scanf("%d.%d.%d %d.%d.%d",&G,&S,&K,&G1,&S1,&K1);
	t=G*17*29+S*29+K;
	t1=G1*17*29+S1*29+K1;
	if(t1-t<0){
		repay=t-t1;
	}
	else repay=t1-t;
	int g,s,k;
	g=repay/(17*29);
	s=(repay-(g*17*29))/29;
	k=(repay-(g*17*29)-(s*29));
	if(t1-t<0)
	cout<<"-"<<g<<"."<<s<<"."<<k<<endl;
	else
	cout<<g<<"."<<s<<"."<<k<<endl; 
 } 
