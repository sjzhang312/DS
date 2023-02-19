#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct node{
	int address;
	int data;
	int next;
};
int main() {
	int faddr,n,k,realnum=0;
	cin>>faddr>>n>>k;
	node t;
	vector<node>v1(300000),v2,v3;
	for(int i=0;i<n;i++){
		cin>>t.address>>t.data>>t.next;
		v1[t.address]=t;
	}

	for(int i=faddr;i!=-1;i=v1[i].next){
		v2.push_back(v1[i]);
		realnum++;
	}
	
	
	for(int i=0;i<realnum;i++){
		if(v2[i].data<0){
			v3.push_back(v2[i]);
		}
	}
	for(int i=0;i<realnum;i++){
		if(v2[i].data>=0&&v2[i].data<=k){
			v3.push_back(v2[i]);
		}
	}
	for(int i=0;i<realnum;i++){
		if(v2[i].data>k){
			v3.push_back(v2[i]);
		}
	}
	for(int i=0;i<realnum;i++){
		if(i!=realnum-1)
		printf("%05d %d %05d\n",v3[i].address,v3[i].data,v3[i+1].address);
		else
		printf("%05d %d -1",v3[i].address,v3[i].data);
	}

}
