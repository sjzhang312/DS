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
	LNode *r=L;//rΪ��βָ�� 
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
	LNode* pre1=L,*pre2=L;//�ֱ�ָ�����һ����ż��� 
	while(p){
		q=p;
		p=p->next;
		
		if(q->data<0){	//����
			q->next=pre1->next;
			pre1->next=q;
			pre1=pre1->next;
		} 
		else {	    //ż��
			q->next=pre2->next;
			pre2->next=q;
			pre2=pre2->next;
		} 
	} 
	return L; 
}
// 2019-DS-3 ����ʹ�ø�����ǰ - ͷ�巨
void exchangeLinkList2(LinkList &L){
    LinkList p = L->next;
    LinkList q;
    while(p->next){
        if(p->next->data >= 0){
            p = p->next;
        }else{// С��0ʱͷ�嵽ǰ��
            q = p->next;            // qΪ��ǰС��0�Ľ��
            p->next = q->next;      // �޸ĵ�ǰp��nextָ�����ƶ�q���
            q->next = L->next;      // ͷ�巨��q��nextָ��L->next
            L->next = q;            // �޸�ͷ���
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
