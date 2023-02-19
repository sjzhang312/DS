#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
const int maxn=50;
struct node{
	int data;
	node* lchild,*rchild;
};


void insert(node* &root,int x){
	if(root==NULL){
		node* Node = new node; 
		Node->data=x;
		Node->lchild=Node->rchild=NULL;
		root=Node;
		return ;
	}
	if(x==root->data)return ;
	else if(x<root->data)insert(root->lchild,x);
	else insert(root->rchild,x);
	
} 
node* create(int data[],int n){
	
	node* root=NULL;
	for(int i=0;i<n;i++)
	insert(root,data[i]);
	return root;
}
//²ãÐò±éÀú 
void BFS(node* root){
	queue<node* >q;
	q.push(root);
	while(!q.empty()){
		node* now=q.front();
		printf("%d",now->data);
		q.pop();
		if(now->lchild!=NULL)
			q.push(now->lchild);
		if(now->rchild!=NULL)
			q.push(now->rchild);
	}
}
//Ö÷º¯Êý 
int main()
{
	int n;
	int data[maxn];
	scanf("%d",&n);
	for(int i=0;i<n;i++)cin>>data[i]; 
	node* root=create(data,n); 
	BFS(root);
	return 0;
}
