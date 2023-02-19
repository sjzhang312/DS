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
int main()
{	
	TreeNode* T;
	T=create();
	LevelOrder(T);
	cout<<endl;
	cout<<isComplete(T);
	
	return 0;

 } 
 /*²âÊÔ
 
 124##5##36##7## 
 */ 
