#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
int main(){
	int ans=0;
	for(int i=1;i<2021;i++){
		for(int j=1;j<2021;j++){
			if(gcd(i,j)==1)ans++;
		}
	}
	cout<<ans;
} 
