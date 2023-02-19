#include<iostream>
#define ElemType char
using namespace std; 
int m,n;
typedef struct Node
{
    char data;
    struct Node* Lchild;
    struct Node* Rchild;
//        struct Node* parent;    
}BiTNode,*BiTree;
BiTree CreateBiTree(){
    char ch;
    BiTree T;
    scanf("%c",&ch);
//  getchar();
    if(ch=='#') T=NULL;         
    else                        /*例如1234#####才能成功！*/ 
    {
        T =(BiTree)malloc(sizeof(BiTNode));
        T->data = ch;
        T->Lchild = CreateBiTree();
        T->Rchild = CreateBiTree();
    }
    return T;//return root node 
}


void sumpath1(BiTree T,int path,int &sum){
	if(T!=NULL){
		sumpath1(T->Lchild,path+1,sum);
		sumpath1(T->Rchild,path+1,sum);
			sum+=path;
	}
}
int sumpath2(BiTree T,int path){
	if(T==NULL)return 0;
	return path+sumpath2(T->Lchild,path+1)+sumpath2(T->Rchild,path+1);
}
int main()
 {
    BiTree T;
    T=CreateBiTree();

	int sum=0;
	sumpath1(T,0,sum);
	cout<<sum<<endl;	
//	cout<<sumpath2(T,0);
 }
 
/*
124##5##3##
1243
4213
4231
*/
