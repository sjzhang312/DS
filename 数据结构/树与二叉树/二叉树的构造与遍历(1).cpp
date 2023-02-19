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
    if(ch=='#') return NULL;         /*���������Ҫ�ϸ�����ȷ��˳����ܽ���.����Ҫ�õ���������һ������,����˵������n���ڵ�Ķ�����,����n+1������,�����ＴΪ�����������n��Ԫ��,��ôһ��Ҫ��n+1��#�Ż������������.*/ 
    else                        /*����1234#####���ܳɹ���*/ 
    {
//        T =(BiTree)malloc(sizeof(BiTNode));
		BiTree T=new BiTNode();
        T->data = ch;
        T->Lchild = CreateBiTree();
        T->Rchild = CreateBiTree();
	    return T;//return root node 
    }

}
//�������������
 void PreOrderTraverse(BiTree T)
 {
    if(T)
    {
        printf("%c",T->data);
        PreOrderTraverse(T->Lchild);
        PreOrderTraverse(T->Rchild);
     }
 }
 //�������������
 void InOrderTraverse(BiTree T)
 {
    if(T)
    {
        InOrderTraverse(T->Lchild);
        printf("%c",T->data);
        InOrderTraverse(T->Rchild);
     }
  } 
  //�������������
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
