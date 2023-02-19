
#include<iostream>
using namespace std;
int main()
{
	int A,B;
	cin>>A>>B;
	int s=A*B;
	int sum=0;
	while(s){
		sum=s%10+10*sum;
		s/=10; 
	}
	cout<<sum;
	return 0;
}

