#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char yan[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	string a;
	int N,allPass=1;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a;
		int sum=0;
		int flag=0;
		int j;
		for(j=0;j<17;j++){
			if(a[j]<'0'||a[j]>'9'){
				flag=1;
				break;
			}
			sum+=(a[j]-'0')*quan[j];
		}
		int z=sum%11;
		if(flag==1||a[17]!=(yan[z])){
			allPass=0;
			cout<<a<<endl;
		}
	}
	if(allPass)
		cout<<"All passed"<<endl;
}


