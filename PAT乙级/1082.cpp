#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	char id[6];
	string maxid;
	string minid;
	int N,x,y;
	cin>>N;
	double s,max=0,min=10000;
	for(int i=0;i<N;i++){
		cin>>id>>x>>y; 
		s=x*x+y*y;
		if(s>max){
			max=s;
			maxid=id;
		}
		if(s<min){
			min=s;
			minid=id;
		}
	}
	cout<<minid<<" "<<maxid;
}
