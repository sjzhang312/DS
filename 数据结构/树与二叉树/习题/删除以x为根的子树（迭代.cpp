#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#include<queue> 
using namespace std;
const int maxn=1010;
typedef struct Node{
	char val;
	struct Node* left;
	struct Node* right;
}TreeNode;
TreeNode *create(){
	queue<TreeNode*>q;
	char ch;
	cin>>ch;
	if(ch=='#')return NULL;
	TreeNode *root=new TreeNode();
	TreeNode *T=root;
	root->val=ch;
	q.push(root);
	while(!q.empty()){
		root=q.front();
		q.pop();
		cin>>ch;
		if(ch=='#')
			root->left=NULL;
		else{
			root->left=new TreeNode();
			root->left->val=ch;
			q.push(root->left);
		}
		cin>>ch;
		if(ch=='#')
			root->right=NULL;
		else{
			root->right=new TreeNode();
			root->right->val=ch;
			q.push(root->right); 
		}
	}
	return T;
}
void LevelOrder(TreeNode *root){
	
	queue<TreeNode *>q;
	q.push(root);
	while(!q.empty()){
		root=q.front();
		q.pop();
		cout<<root->val<<" ";
		if(root->left)
			q.push(root->left);
		if(root->right)
			q.push(root->right);
	} 
}

void Delete(TreeNode *&T){
	if(T){
		Delete(T->left);
		Delete(T->right);
		free(T);
	}
} 
//删除以x为根的结点
void Search(TreeNode *root,char x){
//	if(root->val==x){
//		root->left=NULL;
//		root->right=NULL;
//		return ;	
//	}
	queue<TreeNode*>q;
	q.push(root);
	while(!q.empty()){
		TreeNode *cur=q.front();
		q.pop();
		if(cur->left){
			if(cur->left->val==x)Delete(cur->left);
			else q.push(cur->left);
		}
		if(cur->right){
			if(cur->right->val==x)Delete(cur->right);
			else q.push(cur->right);
		}
	
	}
} 
int main()
{	
	TreeNode* T;
	T=create();

	Search(T,'4');
	LevelOrder(T);	
	return 0;
 } 
 /*测试
12345######
 */ 
