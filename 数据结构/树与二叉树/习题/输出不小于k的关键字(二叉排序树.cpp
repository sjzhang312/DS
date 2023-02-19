#include<iostream>
#include<stack>
#include<algorithm>
#include<queue>
using namespace std;
typedef struct BiTNode{
	char data;
	struct BiTNode *left;
	struct BiTNode *right;
}*BiTree,BiTNode; 
BiTree create(){
	queue<BiTree>q;
	char ch;
	cin>>ch;
	if(ch=='#')return NULL;
	BiTNode *T=new BiTNode();
	BiTNode *root=T;
	root->data=ch;
	q.push(root);
	while(!q.empty()){
		BiTNode *root=q.front();
		q.pop();
		cin>>ch;
		if(ch=='#')
			root->left=NULL;
		else {
			root->left=new BiTNode();
			root->left->data=ch;
			q.push(root->left);
		}
		cin>>ch;
		if(ch=='#')
			root->right=NULL;
		else {
			root->right=new BiTNode();
			root->right->data=ch;
			q.push(root->right);
		}
	}
	return T;
}
void LevelOrder(BiTree root){
	
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
void OutPut(BiTNode *T,char k){
	if(T==NULL)return ;
	if(T->right!=NULL)
		OutPut(T->right,k);
	if(T->data>=k){
		cout<<T->data<<" ";
	}	
		
	if(T->left!=NULL)
		OutPut(T->left,k);
}
int main()
{
	BiTree T;
	T=create();
	LevelOrder(T);
	cout<<endl;

	OutPut(T,'4');
	return 0;
}
