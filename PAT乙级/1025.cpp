#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
struct node{
	int addr;
	int data;
	int next;
};
int main()
{
	int n,k,faddr;
	cin>>faddr>>n>>k;
	vector<node>v1,v2;
	v1.reserve(100000);//预留空间100000
	node t;
	for(int i=0;i<n;i++){
		cin>>t.addr>>t.data>>t.next;
		v1[t.addr]=t;//将结构体保存到V1 
	} 
	int realnum=0;
	for(int i=faddr;i!=-1;i=v1[i].next){
		v2.push_back(v1[i]);
		realnum++;
	}
	for(int i=0;i<realnum/k;i++)
	reverse(v2.begin()+i*k,v2.begin()+i*k+k);
	for(int i=0;i<realnum;i++){
		if(i!=realnum-1)
		printf("%05d %d %05d\n",v2[i].addr,v2[i].data,v2[i+1].addr);
		else
		printf("%05d %d -1",v2[i].addr,v2[i].data);
	}
	return 0;
}

