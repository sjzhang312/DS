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
TreeNode * create(){
	char ch;
	cin>>ch;
	if(ch=='#')return NULL;
	else{
		TreeNode *root=new TreeNode();
		root->val=ch;
		root->left=create();
		root->right=create();
	}
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
void LevelOrder_1(TreeNode *root){
	queue<TreeNode*>q;
	stack<TreeNode*>s;
	q.push(root);
	while(!q.empty()){
		root=q.front();
		q.pop();
		s.push(root);
		if(root->left)
			q.push(root->left);
		if(root->right)
			q.push(root->right);
	}
	while(!s.empty()){
		
		cout<<s.top()->val<<" ";
		s.pop();
	}
}
int main()
{	
	TreeNode* T;
	T=create();
	LevelOrder(T);
	cout<<endl;
	LevelOrder_1(T);
	return 0;
 } 
