#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn=1010;
	int i=1;
	char ch;
typedef struct Node{
	char val;
	struct Node *left;
	struct Node *right;
}TreeNode,*BiTree;
TreeNode *create(){//层序构造二叉树 
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

//判定是否为完全二叉树  课后习题第7题 
bool isComplete(TreeNode *root){
	if(root==NULL)return true;
	queue<TreeNode*>q;
	q.push(root);
	TreeNode *p=root;
	while(!q.empty()){
		p=q.front();
		q.pop();
		if(p){
			q.push(p->left);
			q.push(p->right);
		}
		else 
			while(!q.empty()){
				p=q.front();
				q.pop();
				if(p)return false;
			}
	}
	return true;
}



//前序遍历第k个结点
char  preNode(TreeNode *T,int k){
	if(T==NULL)return '#';
	if(i==k)return T->val;
	i++;
	ch=preNode(T->left,k);
	if(ch!='#')return ch;
	ch=preNode(T->right,k);
//	return ch;
}



int main()
{
	TreeNode * T;
	T=create();
	LevelOrder(T);
	cout<<endl;

	cout<<isComplete(T);

	
//	cout<<preNode(T,2);
	return 0;
}
