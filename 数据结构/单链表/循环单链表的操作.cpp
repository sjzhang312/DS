#include"01.cpp"  
LinkList List_TailInsert(LinkList &L){
	int x;
//	LinkList L=new LinkList;
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
	r->next=L;
	return L;
}
void printListNode(LinkList L){
	L=L->next;
	while(L!=NULL){
		cout<<L->val<<" ";
		L=L->next;
	}
}
//循环单链表的删除最小值
void deleteNode(LNode *&L){
	LNode *p,*minp,*minpre,*pre;
	while(L->next!=L){
		p=L->next;
		pre=L;
		minp=p;
		minpre=L;
		while(p!=L){
			if(p->val<minp->val){
				minpre=pre;
				minp=p;
			}
			pre=p;//遍历结点的前一个结点 
			p=p->next;	
		}
		cout<<minp->val<<" "; 
		minpre->next=minp->next;
		free(minp);	
	}
	free(L);
}
int main()
{
	LinkList L;
	List_TailInsert(L);
	deleteNode(L);
	cout<<endl;
 } 
