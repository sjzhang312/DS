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
	TreeNode *p=root; 
	while(!q.empty()){
		p=q.front();
		q.pop();
		cout<<p->val<<" ";
		if(p->left)
			q.push(p->left);
		if(p->right)
			q.push(p->right);
	} 
}

//判定是否为完全二叉树  课后习题第7题 
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

// 11/12/21 09:55 错误 
//判定是否为二叉排序树 课后习题第6题 
bool judge(TreeNode *T){ 
	if(T==NULL)return true;
	if(T->left)
		if(T->left->val>=T->val)return false;
	if(T->right)
		if(T->right->val<=T->val)return false;
	return judge(T->left)&&judge(T->right);
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

bool is_LevelEqualValue(BiTree &T,int level){
    // 当前结点为空时，返回false,即不相等
    if(!T)
        return false;
    // 如果当前结点的值与层次相同，则返回true
    if(T->val == level)
        return true;
    // 否则，递归的向下搜索，如果下面结点有结点与层次相同的结点，则为true
    return is_LevelEqualValue(T->left,level+1) || is_LevelEqualValue(T->right,level);
}

int main()
{
	TreeNode * T;
	T=create();
	LevelOrder(T);
	cout<<endl;
//	cout<<is_LevelEqualValue(T,0);
	//cout<<endl<<isComplete(T);
//	cout<<endl<<judge(T);
	
//	cout<<preNode(T,2);
	return 0;
}
