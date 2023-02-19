#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
const int maxn=50;
int pre[maxn],in[maxn],post[maxn];
int n;
struct node{
	int data;
	node* lchild;
	node* rchild;
};
node* create(int postL,int postR,int inL,int inR){
	if(postL>postR)return NULL;
	node* root=new node;
	root->data=post[postR];//ָ����ڵ�
	int k;
	for(k=inL;k<=inR;k++){
		if(in[k]==post[postR])break;
	} 
	int numright=inR-k;//���������ĸ���
	//�ݹ齨��
	root->lchild=create(postL,postR-1-numright,inL,k-1);
	root->rchild=create(postR-numright,postR-1,k+1,inR);
}
void BFS(node* root){
	queue<node* >q;
	q.push(root);
	while(!q.empty()){
		node* now=q.front();
		q.pop();
		printf("%d",now->data);
		if(now->lchild!=NULL)q.push(now->lchild);
		if(now->rchild!=NULL)q.push(now->rchild);
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&post[i]); 
	} 
	for(int i=0;i<n;i++){
		scanf("%d",&in[i]);
	}
	node* root=create(0,n-1,0,n-1);
	BFS(root);
	
	return 0;
}
