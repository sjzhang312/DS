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

//�ж��Ƿ�Ϊ��ȫ������  �κ�ϰ���7�� 
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

// 11/12/21 09:55 ���� 
//�ж��Ƿ�Ϊ���������� �κ�ϰ���6�� 
bool judge(TreeNode *T){ 
	if(T==NULL)return true;
	if(T->left)
		if(T->left->val>=T->val)return false;
	if(T->right)
		if(T->right->val<=T->val)return false;
	return judge(T->left)&&judge(T->right);
}

//ǰ�������k�����
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
    // ��ǰ���Ϊ��ʱ������false,�������
    if(!T)
        return false;
    // �����ǰ����ֵ������ͬ���򷵻�true
    if(T->val == level)
        return true;
    // ���򣬵ݹ����������������������н��������ͬ�Ľ�㣬��Ϊtrue
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
