#include"01.cpp"
int cnt=0;
bool flag=true;
/*
一个顺序表，存储结构为没有头节点的单链表，使用递归方法删除单链表位序为奇数的结
点，例如(1,2,3,4,5),删除后的结果为(2,4)

*/

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
}
void printLinkList(LinkList first){
	while(first!=NULL){
		cout<<first->val<<" ";
		first=first->next;
	}
}
LinkList delete_odd(LinkList &first){
	if(first==NULL)return first;
	if(first->next==NULL)return first;
	if(flag){
		flag=false;
//		return delete_odd(first->next);
		first=first->next;
		return delete_odd(first);
	}
	else{
		cnt++;
		if(cnt%2!=0)
		return delete_odd(first->next);
		else{
			first=first->next;
			return delete_odd(first);
		}
	}

}
int main()
{
	LinkList L;
	List_TailInsert(L);
	LNode *first=L->next;
	cout<<"原链表为："; 
	printLinkList(first);
	delete_odd(first);
	cout<<endl<<"新链表为：";
	printLinkList(first);
}
