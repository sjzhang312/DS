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
	r->next=NULL;//�����������β���һ��Ҫ�ÿ� 
	return L;
}
void printListNode(LinkList L){
	L=L->next;
	while(L!=NULL){
		cout<<L->val<<" ";
		L=L->next;
	}
}
LNode* DeleteLinkList(LNode* &L,int n){
	if(L==NULL)
		return L;
	if(L->val==n){
		L=L->next;
		return DeleteLinkList(L,n);
	}else return DeleteLinkList(L->next,n);
}
LinkList delete_odd(LinkList &L){
	if(L==NULL)return L;
	if(L->next==NULL)return L;

	return delete_odd(L->next);
}
int main()
{
	
	LinkList L;
	List_TailInsert(L);
	cout<<"ԭ����Ϊ��"; 
	printListNode(L);
	DeleteLinkList(L,2);
	cout<<endl<<"������Ϊ��";
	printListNode(L);
 } 
