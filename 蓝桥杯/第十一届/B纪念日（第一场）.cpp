#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;  
int months[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int ans=0;
  for(int i=1921;i<=2020;i++){
  	months[2]=28;
  	if(i==1921){
  		for(int j=8;j<=12;j++){
  			ans+=months[j];
		  }
		  ans+=(31-23);
	  }
	else if(i==2020){
		months[2]=29;
		for(int j=1;j<=6;j++){
			ans+=months[j];
		}
		ans+=1;
	}
	else{
		months[2]+=((i%4==0&&i%100!=0)||(i%400==0));
		for(int j=1;j<=12;j++){
			ans+=months[j];
		}
	}
  } 
  cout<<ans<<endl;
  cout<<ans*24*60;
}
