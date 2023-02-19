#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn=1010;
int sum=0;
	int ch;
typedef struct Node{
	int val;
	struct Node *left;
	struct Node *right;
}TreeNode,*BiTree;
TreeNode *create(){
	queue<TreeNode*>q;

	cin>>ch;
	if(ch==0)return NULL;
	TreeNode *root=new TreeNode();
	TreeNode *T=root;
	root->val=ch;
	q.push(root);
	while(!q.empty()){
		root=q.front();
		q.pop();
		cin>>ch;
		if(ch==0)
			root->left=NULL;
		else{
			root->left=new TreeNode();
			root->left->val=ch;
			q.push(root->left);
		}
		cin>>ch;
		if(ch==0)
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
int preorder_wpl(BiTree root,int depth){
//	if(root){
//		if(!root->left && !root->right)
//			sum+=root->val*depth;
//			
//		preorder_wpl(root->left,depth+1);
//		preorder_wpl(root->right,depth+1);
//		
//	}
	if(!root->left && !root->right)
		sum+=root->val*depth;
	if(root->left)preorder_wpl(root->left,depth+1);
	if(root->right)preorder_wpl(root->right,depth+1); 
	return sum;
}
int postorder_wpl(BiTree T,int depth){
	if(T==NULL)return 0;
	int t1=postorder_wpl(T->left,depth+1);
	int t2=postorder_wpl(T->right,depth+1);
	int tmp=0;
	if(T->left==NULL &&T->right==NULL)
	tmp=T->val*depth;
	return t1+t2+tmp;
}
//bool is_LevelEqualValue(BiTree &T,char level){
//    // 当前结点为空时，返回false,即不相等
//    if(!T)
//        return false;
//    // 如果当前结点的值与层次相同，则返回true
//    if(T->val == level)
//        return true;
//    // 否则，递归的向下搜索，如果下面结点有结点与层次相同的结点，则为true
//    return is_LevelEqualValue(T->left,level+1) || is_LevelEqualValue(T->right,level);
//}

bool levelequalvalue(BiTree T,int level){
	if(T==NULL)return false;
	return T->val==level||levelequalvalue(T->left,level+1)||levelequalvalue(T->right,level+1);
}
int main()
{
	TreeNode * T;
	T=create();
	LevelOrder(T);
	cout<<endl;
	
	cout<<preorder_wpl(T,0);
	cout<<endl;
	cout<<postorder_wpl(T,0);
	return 0;
}

/*
3 1 2 0 0 4 5 0 0 0 0
*/
