#include<iostream>
using namespace std;
typedef struct LNode{
	int data;
	struct LNode *next; 
}LNode,*LinkList;
LinkList List_TailInsert(LinkList &L){
	int x;
	L=new LNode();
//	L->next=NULL;
	cin>>x;
	LNode *r=L;//r为表尾指针 
	while(x!=9999){
		LNode *s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		r->next=s;
		r=s;
		cin>>x;
	}
	r->next=NULL;
	return L;	
}
void printListNode(LinkList L){
	L=L->next;
	while(L!=NULL){
		cout<<L->data<<" ";
		L=L->next;
	}
}
LinkList bc(LinkList L){
	if(L==NULL)return NULL;
	LNode *p=L->next,*q;
	L->next=NULL;
	LNode* pre1=L,*pre2=L;//分别指向最后一个奇偶结点 
	while(p){
		q=p;
		p=p->next;
		
		if(q->data<0){	//奇数
			q->next=pre1->next;
			pre1->next=q;
			pre1=pre1->next;
		} 
		else {	    //偶数
			q->next=pre2->next;
			pre2->next=q;
			pre2=pre2->next;
		} 
	} 
	return L; 
}
// 2019-DS-3 链表使得负的在前 - 头插法
void exchangeLinkList2(LinkList &L){
    LinkList p = L->next;
    LinkList q;
    while(p->next){
        if(p->next->data >= 0){
            p = p->next;
        }else{// 小于0时头插到前面
            q = p->next;            // q为当前小于0的结点
            p->next = q->next;      // 修改当前p的next指针域，移动q结点
            q->next = L->next;      // 头插法，q的next指向L->next
            L->next = q;            // 修改头结点
        }
    }
}

int main()
{
	LinkList L;
	List_TailInsert(L);
	printListNode(L);
	cout<<endl;
	bc(L);
	printListNode(L);
	cout<<endl;
	exchangeLinkList2;
		printListNode(L);
}
