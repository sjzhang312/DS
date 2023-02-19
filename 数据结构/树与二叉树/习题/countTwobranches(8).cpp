#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn=1010;
typedef struct Node{
	char val;
	struct Node *left;
	struct Node *right;
}TreeNode,*BinaryTree;
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
//层序 
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

//判定是否为完全二叉树 
bool isComplete(TreeNode *root){
	if(root==NULL)return true;
	queue<TreeNode*>q;
	q.push(root);
	while(!q.empty()){
		root=q.front();
		q.pop();
		if(root){
			q.push(root->left);
			q.push(root->right);
		}
		else 
			while(!q.empty()){
				root=q.front();
				q.pop();
				if(root)return false;
			}
	}
	return true;
}

int countTwobranches(TreeNode *root){
	if(root==NULL)return 0;
	int count=0;
	if(!root->left||!root->right)return 0;
	if(root->left&&root->right)count=1;//判断该层结点是否为双分支结点 
	return countTwobranches(root->left)+countTwobranches(root->right)+count;
	
} 
int main()
{
	TreeNode * T;
	T=create();
	LevelOrder(T);
	cout<<endl<<isComplete(T);
	cout<<endl;
	cout<<countTwobranches(T);
	return 0;
}
