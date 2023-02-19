#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int n=2019;
	for(int i=2020;;i++){
		for (int j=2021;j<10000;j++){
			if(j*j-i*i==i*i-2019*2019){
				cout<<i+j<<endl;
				break;
			}
		}
	} 
 } 
