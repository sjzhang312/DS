#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn=1010;
	int i=1;
	char ch;
typedef struct Node{
	char data;
	struct Node *lchild;
	struct Node *rchild;
}TreeNode,*BiTree;
TreeNode *create(){
	queue<TreeNode*>q;
	char ch;
	cin>>ch;
	if(ch=='#')return NULL;
	TreeNode *root=new TreeNode();
	TreeNode *T=root;
	root->data=ch;
	q.push(root);
	while(!q.empty()){
		root=q.front();
		q.pop();
		cin>>ch;
		if(ch=='#')
			root->lchild=NULL;
		else{
			root->lchild=new TreeNode();
			root->lchild->data=ch;
			q.push(root->lchild);
		}
		cin>>ch;
		if(ch=='#')
			root->rchild=NULL;
		else{
			root->rchild=new TreeNode();
			root->rchild->data=ch;
			q.push(root->rchild); 
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
		cout<<root->data<<" ";
		if(root->lchild)
			q.push(root->lchild);
		if(root->rchild)
			q.push(root->rchild);
	} 
}
void insertBST(BiTree &T,TreeNode *p){
	if(T==NULL){
		T=p;
		return ;
	}
	if(p->data>T->data)
		insertBST(T->rchild,p);
	else if(p->data<T->data)
		insertBST(T->lchild,p);
}


// 递归 求中序遍历中第1个结点
BiTree getInOrderFirst(BiTree T){
    if(T == NULL){
        return T;
    }
    if(T->lchild)
        return getInOrderFirst(T->lchild);
    else
        return T;
}

// BST 原树中删除小于x的结点，放到新BST T1中，原树中大于Y的结点放到新BST T2中
void splitBST(BiTree &T,int x, int y, BiTree &T1, BiTree &T2){
    if(T == NULL)
        return ;
    BiTree p = T;
    if(p->data > y){
        // 结点值大于y时，删除当前结点，加入T1
        insertBST(T1,p);// 插入到T1中
        // 然后在树T中删除这个结点
        //分三种情况进行删除
        if(p->rchild == NULL){
            T = T->lchild;
            //当前结点使用右子树填补
        }else if(p->lchild == NULL){
            T = T->rchild;
            //左子树为空，用右子树填补
        }else if(p->lchild==NULL&&p->rchild==NULL){
            //有左右子树，则使用右子树中序遍历的第一个结点进行填补
            T = getInOrderFirst(p->rchild);
        }
        p->rchild = p->lchild = NULL;// 清除左右子树指针
        free(p);
        splitBST(T,x,y,T1,T2);// 以当前结点继续拆分
    }else if(p->data < x){
        // 结点值小于x时，删除当前结点，加入T2
    
        insertBST(T2,p);// 插入到T2中
        // 然后在树T中删除这个结点
        //分三种情况进行删除
        if(p->rchild == NULL){
            T = T->lchild;
            //当前结点使用右子树填补
        }else if(p->lchild == NULL){
            T = T->rchild;
            //左子树为空，用右子树填补
        }else if(p->lchild==NULL&&p->rchild==NULL){
            //有左右子树，则使用右子树中序遍历的第一个结点进行填补
            T = getInOrderFirst(p->rchild);
        }
        free(p);
        p->rchild = p->lchild = NULL;// 清除左右子树指针
        splitBST(T,x,y,T1,T2);// 以当前结点继续拆分
    }else{
        //继续拆分BST的左右子树。
        splitBST(T->lchild,x,y,T1,T2);
        splitBST(T->rchild,x,y,T1,T2);
    }
}


int main()
{
	TreeNode * T;
	BiTree T1,T2;
	T=create();
	cout<<"原树为："; 
	LevelOrder(T);
	cout<<endl<<"删除后："<<endl;
	splitBST(T,3,5,T1,T2);
	cout<<"T1:";
	LevelOrder(T1);
	cout<<"T2:";
	LevelOrder(T2);
	return 0;
}
