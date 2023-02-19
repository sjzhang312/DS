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
    BiTree T;
    scanf("%c",&ch);
//  getchar();
    if(ch=='#') return NULL;         /*���������Ҫ�ϸ�����ȷ��˳����ܽ���.����Ҫ�õ���������һ������,����˵������n���ڵ�Ķ�����,����n+1������,�����ＴΪ�����������n��Ԫ��,��ôһ��Ҫ��n+1��#�Ż������������.*/ 
    else                        /*����1234#####���ܳɹ���*/ 
    {
        T =(BiTree)malloc(sizeof(BiTNode));
        T->data = ch;
        T->Lchild = CreateBiTree();
        T->Rchild = CreateBiTree();

    }
    return T;//return root node 
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

vector<char> postorderTraversal(BiTNode* root) {
        stack<BiTNode*>s;
        // s.push(root);
        
        BiTNode *prev=NULL;//��¼��������������Ľڵ�
        while(root||!s.empty()){
            while(root!=NULL){
                s.push(root);
                root=root->Lchild;
            }
            root=s.top();
             s.pop();
            if(root->Rchild==NULL||root->Rchild==prev){
            	if(root->Rchild)cout<<"##"<<root->data<<" "<<root->Rchild->data<<endl;
                res.push_back(root->data);
               
                prev=root;
                root=NULL;
            }
            else{
                s.push(root);
                root=root->Rchild;
            }

        }
        
        return res;
    }
    

int main()
 {
    BiTree T;
    T=CreateBiTree();
//    PreOrderTraverse(T);
//    printf("\n");
//
//    InOrderTraverse(T); 
//    printf("\n"); 

    postorderTraversal(T);
    for(int i=0;i<res.size();i++)cout<<res[i]<<" ";
//        PostOrderTraverse(T); 
 }
 
/*
124###3##
1243
4213
4231
*/
