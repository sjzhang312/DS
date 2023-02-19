#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int a[100000]={0};//大数组一定要放在全局 
struct Node{
	int add;
	int data;
	int next;
}node;
//第一次提交出现段错误
//原因：数组越界  用v2[i].data  改成v2[i].add
int main()
{
	int faddr,n,k,num=0;
	cin>>faddr>>n>>k;
	vector<Node>v1(100000),v2,v3;//构建v1,v2 
	for(int i=0;i<n;i++){
		cin>>node.add>>node.data>>node.next;
		v1[node.add]=node; //将结构体存放在v1中 
	}
	for(int i=faddr;i!=-1;i=v1[i].next){
		v2.push_back(v1[i]);
		num++;
	}//num用来存放有几个结点 
	for(int i=0;i<num;i++){
		if(v2[i].data<0){
		v3.push_back(Node{v2[i].add,v2[i].data});
		a[v2[i].add]=1;
		}
	}
	for(int i=0;i<num;i++){
		if(v2[i].data<=k&&v2[i].data>=0){
		v3.push_back(Node{v2[i].add,v2[i].data});
		a[v2[i].add]=1;
		}
	}
	for(int i=0;i<num;i++){
		if(a[v2[i].add]==0)
		v3.push_back(Node{v2[i].add,v2[i].data});
	}
	//打印 
	for(int i=0;i<num;i++){
		if(i!=num-1)
		printf("%05d %d %05d\n",v3[i].add,v3[i].data,v3[i+1].add);
		else
		printf("%05d %d -1",v3[i].add,v3[i].data);
	}
 } 
