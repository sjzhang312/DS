#include<iostream>
#include<vector> 
#include<stack>

//#define ElemType char
using namespace std; 
vector<char>res;
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
    //BiTree T;
    scanf("%c",&ch);
//  getchar();
    if(ch=='#') return NULL;         /*这里的输入要严格按照正确的顺序才能结束.这里要用到二叉树的一个性质,就是说对于有n个节点的二叉树,就有n+1个空域,在这里即为如果你输入了n个元素,那么一定要有n+1个#才会结束迭代过程.*/ 
    else                        /*例如1234#####才能成功！*/ 
    {
//        T =(BiTree)malloc(sizeof(BiTNode));
		BiTree T=new BiTNode();
        T->data = ch;
        T->Lchild = CreateBiTree();
        T->Rchild = CreateBiTree();
	    return T;//return root node 
    }

}
//先序遍历二叉树
 void PreOrderTraverse(BiTree T)
 {
    if(T)
    {
        printf("%c",T->data);
        PreOrderTraverse(T->Lchild);
        PreOrderTraverse(T->Rchild);
     }
 }
 //中序遍历二叉树
 void InOrderTraverse(BiTree T)
 {
    if(T)
    {
        InOrderTraverse(T->Lchild);
        printf("%c",T->data);
        InOrderTraverse(T->Rchild);
     }
  } 
  //后序遍历二叉树
  void PostOrderTraverse(BiTree T)
  {
    if(T)
    {
        PostOrderTraverse(T->Lchild);
        PostOrderTraverse(T->Rchild);
        printf("%c",T->data);
      }
   } 

int depth(BiTree T){
	if(T==NULL)return 0;
	int left=depth(T->Lchild);
	int right=depth(T->Rchild);
	return max(left,right)+1;
} 
int main()
 {
    BiTree T;
    T=CreateBiTree();
    PreOrderTraverse(T);
    printf("\n");
	
    InOrderTraverse(T); 
    printf("\n"); 
    PostOrderTraverse(T);
    printf("\n"); 
    cout<<depth(T);

 }
 
/*
124###3##
1243
4213
4231


ABD###C##
*/
