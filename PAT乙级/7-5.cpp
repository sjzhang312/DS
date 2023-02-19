
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
struct Node{
	int add;
	int data;
	int next;
}node;
int main()
{
	vector<Node>v1(100000),v2;
	int faddr,N,k,num=0;
	cin>>faddr>>N>>k;
	for(int i=0;i<N;i++){
		cin>>node.add>>node.data>>node.next;
		v1[node.add]=node;//用vextor数组存储结构体 
	}
	for(int i=faddr;i!=-1;i=v1[i].next){
		v2.push_back(v1[i]);
		num++;
	} 
	//反转
	for(int i=0;i<num/k;i++)
	reverse(v2.begin()+i*k,v2.begin()+i*k+k); 
	
	for(int i=0;i<num;i++){
		if(i!=num-1)
		printf("%05d %d %05d\n",v2[i].add,v2[i].data,v2[i+1].add);
		else
		printf("%05d %d -1",v2[i].add,v2[i].data);
	}
}
