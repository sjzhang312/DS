#include<iostream>
using namespace std;
bool check(int x,int y,int z){
	int res=0;
	while(x){
		res=x%10;
		if(res==2||res==4){
			return false;
		}
		res=x/10;
	} 
	while(y){
		res=y%10;
		if(res==2||res==4){
			return false;
		} 
		res=y/10;
	}
	while(z){
		res=z%10;
		if(res==2||res==4){
			return false;
		}
		res=z/10;
	}
}
int main()
{
	int sum=0;
	for(int a=1;a<2019;a++){
		for(int b=1;b<2019;b++){
			if(a==b)continue;
			int c=2019-a-b;
			if(a==c||b==c)continue;
			if(check(a,b,c))sum++; 
			
		}
	}
	cout<<sum/6<<endl;
	return 0;
}
