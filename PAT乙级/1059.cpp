#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool isprime(int a){
	if(a<=1)return false;
	int t=sqrt(double(a));
	for(int i=2;i<=t;i++)
	if(a%i==0)return false;
	return true; 
}
int main()
{
	int n;
	scanf("%d",&n);
	vector<int> a(n);
	vector<int>hash(10010,1);
	for(int i=0;i<n;i++)
	cin>>a[i];
	int k;
	scanf("%d",&k);
	vector<int>b(k);
	for(int i=0;i<k;i++){
		cin>>b[i];
		printf("%04d: ",b[i]);
	
		if(b[i]==a[0]){
			if(hash[a[0]]){
			printf("Mystery Award\n");
			hash[a[0]]=0;
			}
			else printf("Checked\n"); 
		}
		else{
			int flag=1;
			for(int j=1;j<n;j++){
			if(b[i]==a[j]){//能查到 id
				if(hash[a[j]]){
				if(isprime(j+1))printf("Minion\n");
				else printf("Chocolate\n");
				hash[a[j]]=0;
				}
			    else printf("Checked\n"); 
			    flag=0;
			    break;
			}
			}
			//查找不到 id 
			if(flag) printf("Are you kidding?\n");
		} 	
	}
	return 0;
}
