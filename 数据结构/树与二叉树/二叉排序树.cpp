#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

typedef struct Node{
	int data;
	struct Node *left;
	struct Node *right;
}BiTNode,*BiTree;

int insert_BST(BiTree &T,int k){
	if(T==NULL){//¿ÕÊ÷ 
		T=(BiTree)malloc (sizeof(BiTNode));
		T->data=k;
		T->left=NULL;
		T->right=NULL;
		return 1;
	}else if(k==T->data)
		return 0;
	else if(k<T->data)
		return insert_BST(T->left,k);
	else 
		return insert_BST(T->right,k);
}
void Create_BST(BiTree &T,int a[],int n){
	T=NULL;
	int i=0;
	while(i<n){
		insert_BST(T,a[i]);
		i++;
	}
}
//²ãÐò±éÀú 
void LevelOrder(BiTNode *root){
	queue<BiTNode *>q;
	q.push(root);
	while(!q.empty()){
		root=q.front();
		q.pop();
		cout<<root->data<<" ";
		if(root->left)
			q.push(root->left);
		if(root->right)
			q.push(root->right);
	} 
}
int main()
{
	int n;
	cin>>n;
	int a[n+10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	BiTree T;
	Create_BST(T,a,n);
	LevelOrder(T); 
	return 0;
 } 
 
 /*
 6
45 24 53 45 12 24
 */ 
