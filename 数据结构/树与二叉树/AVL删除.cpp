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


// �ݹ� ����������е�1�����
BiTree getInOrderFirst(BiTree T){
    if(T == NULL){
        return T;
    }
    if(T->lchild)
        return getInOrderFirst(T->lchild);
    else
        return T;
}

// BST ԭ����ɾ��С��x�Ľ�㣬�ŵ���BST T1�У�ԭ���д���Y�Ľ��ŵ���BST T2��
void splitBST(BiTree &T,int x, int y, BiTree &T1, BiTree &T2){
    if(T == NULL)
        return ;
    BiTree p = T;
    if(p->data > y){
        // ���ֵ����yʱ��ɾ����ǰ��㣬����T1
        insertBST(T1,p);// ���뵽T1��
        // Ȼ������T��ɾ��������
        //�������������ɾ��
        if(p->rchild == NULL){
            T = T->lchild;
            //��ǰ���ʹ���������
        }else if(p->lchild == NULL){
            T = T->rchild;
            //������Ϊ�գ����������
        }else if(p->lchild==NULL&&p->rchild==NULL){
            //��������������ʹ����������������ĵ�һ���������
            T = getInOrderFirst(p->rchild);
        }
        p->rchild = p->lchild = NULL;// �����������ָ��
        free(p);
        splitBST(T,x,y,T1,T2);// �Ե�ǰ���������
    }else if(p->data < x){
        // ���ֵС��xʱ��ɾ����ǰ��㣬����T2
    
        insertBST(T2,p);// ���뵽T2��
        // Ȼ������T��ɾ��������
        //�������������ɾ��
        if(p->rchild == NULL){
            T = T->lchild;
            //��ǰ���ʹ���������
        }else if(p->lchild == NULL){
            T = T->rchild;
            //������Ϊ�գ����������
        }else if(p->lchild==NULL&&p->rchild==NULL){
            //��������������ʹ����������������ĵ�һ���������
            T = getInOrderFirst(p->rchild);
        }
        free(p);
        p->rchild = p->lchild = NULL;// �����������ָ��
        splitBST(T,x,y,T1,T2);// �Ե�ǰ���������
    }else{
        //�������BST������������
        splitBST(T->lchild,x,y,T1,T2);
        splitBST(T->rchild,x,y,T1,T2);
    }
}


int main()
{
	TreeNode * T;
	BiTree T1,T2;
	T=create();
	cout<<"ԭ��Ϊ��"; 
	LevelOrder(T);
	cout<<endl<<"ɾ����"<<endl;
	splitBST(T,3,5,T1,T2);
	cout<<"T1:";
	LevelOrder(T1);
	cout<<"T2:";
	LevelOrder(T2);
	return 0;
}
