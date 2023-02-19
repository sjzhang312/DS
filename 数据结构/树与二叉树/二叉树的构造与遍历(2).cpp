#include"stdio.h"
#include"stdlib.h"
#include"string.h"
typedef struct BTNode
{
    char data;
    struct BTNode *lchild,*rchild;
}BTNode;
void  CreateBTNode(BTNode *&T);//���������� 
void  PreBTNode(BTNode *T);//�������������
void  InBTNode(BTNode *T);//�������������
void  PostBTNode(BTNode *T);//�������������
int   DepthBTNode(BTNode *T);//���������
int   LeafBTNode(BTNode *T);//Ҷ�ӽڵ���  
int main()
{
    BTNode *T;
    printf("-----------���������----------\n");
    CreateBTNode(T);
    printf("\n---------�������������-------\n");
    PreBTNode(T);
    printf("\n---------�������������-------\n");
    InBTNode(T);
    printf("\n---------�������������-------\n");
    PostBTNode(T);
    printf("\n--------����������-------\n");
    printf("%d\n",DepthBTNode(T));
    printf("\n--------��Ҷ�ӽڵ���-------\n");
    printf("%d\n",LeafBTNode(T)); 
    system("pause");
    return 0;
} 
//����������
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
//�������������
void  PreBTNode(BTNode *T)
{
      if(T!=NULL)
      {
      printf("%c\t",T->data);
      PreBTNode(T->lchild);
      PreBTNode(T->rchild);
      }
}
//�������������
void  InBTNode(BTNode *T)
{
      if(T!=NULL)
      {
      InBTNode(T->lchild);
      printf("%c\t",T->data);
      InBTNode(T->rchild);
      }
}
//�������������
void  PostBTNode(BTNode *T)
{
      if(T!=NULL)
      {
      
      PostBTNode(T->lchild);
      PostBTNode(T->rchild);
      printf("%c\t",T->data);
      }
}
//���������
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
      
      


//Ҷ�ӽڵ���
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
        
//-----------���������----------
//124###3##
//
//---------�������������-------
//1       2       4       3
//---------�������������-------
//4       2       1       3
//---------�������������-------
//4       2       3       1
//--------����������-------
//2
//
//--------��Ҷ�ӽڵ���-------
//2





