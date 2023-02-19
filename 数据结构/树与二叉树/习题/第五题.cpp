#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn=1010;
	int i=1;
	char ch;
	int depth=0;
typedef struct Node{
	char val;
	struct Node *left;
	struct Node *right;
	struct Node *level;
}TreeNode,*BiTree;
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
//采用层次遍历非递归求解
int Btdepth(BiTree T){
	if(T==NULL)return 0;
	int level=0;
	TreeNode *last=T;
	queue<BiTree>q;
	q.push(T);
	while(!q.empty()){
		TreeNode *cur=q.front();
		q.pop();
		if(cur->left)
			q.push(cur->left);
		if(cur->right)
			q.push(cur->right);
		
		if(cur==last){
			level++;
			if(!q.empty())
				last=q.back();
		}
	}
	return level;
} 
int Depth(BiTree T){
	if(T==NULL)return 0;
	queue<TreeNode *>q;
	q.push(T);
	int i;
	int max=-1;
	while(!q.empty()){
		int size=q.size();
		if(size>max)
			max=size;
		for(i=0;i<size;i++){
			TreeNode *cur=q.front();
			q.pop();
			if(cur->left)q.push(cur->left);
			if(cur->right)q.push(cur->right);
			
		}
		depth++;
	}
	return max;
}


int main()
{
	TreeNode * T;
	T=create();
	cout<<Btdepth(T)<<endl;
	cout<<Depth(T)<<endl;

}
/*
123#5####
*/

