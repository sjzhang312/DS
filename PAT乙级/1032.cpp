#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,num,score;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>num>>score;
		a[num]+=score;
	}
	int max=0,t=1;
	for(int i=0;i<a.size();i++){
		if(a[i]>max){
			max=a[i];
			t=i;
		}
	}
	cout<<t<<" "<<max;
}
