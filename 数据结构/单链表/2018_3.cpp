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
int judge(LinkList L){
	if(L==NULL)return 1;
	LinkList p=L->next;
	while(p){
		if(p->val%2!=0)p=p->next;
		else{//判断为偶数
		 
			while(p){
				if(p->val%2==0)p=p->next;
				else return 0;
			}
			return 1;
		}
	}	
} 
void printListNode(LinkList L){
	L=L->next;
	while(L!=NULL){
		cout<<L->val<<" ";
		L=L->next;
	}
}
int main(){
		
	LinkList L;
	cout<<"原链表为："; 
	List_TailInsert(L);
	printListNode(L);
	cout<<endl<<judge(L);
	return 0;
}
