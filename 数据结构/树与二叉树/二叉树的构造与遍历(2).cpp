#include"stdio.h"
#include"stdlib.h"
#include"string.h"
typedef struct BTNode
{
    char data;
    struct BTNode *lchild,*rchild;
}BTNode;
void  CreateBTNode(BTNode *&T);//构建二叉树 
void  PreBTNode(BTNode *T);//先序遍历二叉树
void  InBTNode(BTNode *T);//中序遍历二叉树
void  PostBTNode(BTNode *T);//后序遍历二叉树
int   DepthBTNode(BTNode *T);//二叉树深度
int   LeafBTNode(BTNode *T);//叶子节点数  
int main()
{
    BTNode *T;
    printf("-----------构造二叉树----------\n");
    CreateBTNode(T);
    printf("\n---------先序遍历二叉树-------\n");
    PreBTNode(T);
    printf("\n---------中序遍历二叉树-------\n");
    InBTNode(T);
    printf("\n---------后序遍历二叉树-------\n");
    PostBTNode(T);
    printf("\n--------求二叉树深度-------\n");
    printf("%d\n",DepthBTNode(T));
    printf("\n--------求叶子节点数-------\n");
    printf("%d\n",LeafBTNode(T)); 
    system("pause");
    return 0;
} 
//构建二叉树
void  CreateBTNode(BTNode* &T)
{
      
      char ch;
      scanf("%c",&ch);
      if(ch=='#')
      T=NULL;
      else
      {
          T=(BTNode *)malloc(sizeof(BTNode));
          T->data=ch;
          CreateBTNode(T->lchild);
          CreateBTNode(T->rchild); 
      }
}
//先序遍历二叉树
void  PreBTNode(BTNode *T)
{
      if(T!=NULL)
      {
      printf("%c\t",T->data);
      PreBTNode(T->lchild);
      PreBTNode(T->rchild);
      }
}
//中序遍历二叉树
void  InBTNode(BTNode *T)
{
      if(T!=NULL)
      {
      InBTNode(T->lchild);
      printf("%c\t",T->data);
      InBTNode(T->rchild);
      }
}
//后序遍历二叉树
void  PostBTNode(BTNode *T)
{
      if(T!=NULL)
      {
      
      PostBTNode(T->lchild);
      PostBTNode(T->rchild);
      printf("%c\t",T->data);
      }
}
//二叉树深度
int   DepthBTNode(BTNode *T)
{     int left,right;
      if(T==NULL)
        return 0;
      else
      {
          left= DepthBTNode(T->lchild);
          right=DepthBTNode(T->rchild); 
          return (left>right?left:right+1); 
      }
}
      
      


//叶子节点数
int   LeafBTNode(BTNode *T)
{
      
    static  int count=0;
      if(T!=NULL)
      {
      if(T->lchild==NULL&&T->rchild==NULL)
        count++;
      LeafBTNode(T->lchild);
      LeafBTNode(T->rchild);
      }
return  count;
}
        
//-----------构造二叉树----------
//124###3##
//
//---------先序遍历二叉树-------
//1       2       4       3
//---------中序遍历二叉树-------
//4       2       1       3
//---------后序遍历二叉树-------
//4       2       3       1
//--------求二叉树深度-------
//2
//
//--------求叶子节点数-------
//2





