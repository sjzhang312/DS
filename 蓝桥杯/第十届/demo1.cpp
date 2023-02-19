#include<iostream>
using namespace std;
int main(){
	int count=0;
	for(int i=10000;i<100000;i++){
		int flag=1;
		string s=to_string(i);

		for(int j=0;j<s.length()-1;j++){
			
			if(s[j]>s[j+1]){
				flag=0;
				break;
			}
			
		}
		if(flag==1){
			count++;
		}
	}
	cout<<count;

} 
