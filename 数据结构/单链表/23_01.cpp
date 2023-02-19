#include"01.cpp" 

LinkList List_TailInsert(LinkList &L){
	int x;
    L=(LinkList)malloc (sizeof(LNode));
	LNode *r=L;
	cin>>x;
	while(x!=9999){
		LinkList s=new LNode;
		s->val=x;
		r->next=s;
		r=s;
		cin>>x;
	}
	r->next=NULL;//单链表结束后尾结点一定要置空 
	return L;
}
void printListNode(LinkList L){
	L=L->next;
	while(L!=NULL){
		cout<<L->val<<" ";
		L=L->next;
	}
}
LNode* DeleteLinkList(LinkList &L,int n){
	if(L==NULL)
		return L;
	if(L->val==n){
//		L=L->next;
		return DeleteLinkList(L->next,n);
	}else return DeleteLinkList(L->next,n);
}
void R_print(LinkList L){
	if(L==NULL)return ;
	R_print(L->next);
	cout<<L->val;
}
int main()
{
	
	LinkList L;
	List_TailInsert(L);
	cout<<"原链表为："; 
	printListNode(L);
	R_print(L->next);
//	DeleteLinkList(L,2);
//	cout<<endl<<"新链表为：";
//	printListNode(L);
 } 
