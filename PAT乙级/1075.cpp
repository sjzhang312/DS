#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int a[100000]={0};//������һ��Ҫ����ȫ�� 
struct Node{
	int add;
	int data;
	int next;
}node;
//��һ���ύ���ֶδ���
//ԭ������Խ��  ��v2[i].data  �ĳ�v2[i].add
int main()
{
	int faddr,n,k,num=0;
	cin>>faddr>>n>>k;
	vector<Node>v1(100000),v2,v3;//����v1,v2 
	for(int i=0;i<n;i++){
		cin>>node.add>>node.data>>node.next;
		v1[node.add]=node; //���ṹ������v1�� 
	}
	for(int i=faddr;i!=-1;i=v1[i].next){
		v2.push_back(v1[i]);
		num++;
	}//num��������м������ 
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
	//��ӡ 
	for(int i=0;i<num;i++){
		if(i!=num-1)
		printf("%05d %d %05d\n",v3[i].add,v3[i].data,v3[i+1].add);
		else
		printf("%05d %d -1",v3[i].add,v3[i].data);
	}
 } 
