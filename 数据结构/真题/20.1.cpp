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
//ɾ�����ֵ����Сֵ��㣬����ƽ��ֵ
double getAverage(LinkList &L,double &avg){
	if(L==NULL||L->next==NULL)return -1;
	LNode *p=L->next;//�����ڵ�
	LNode *premax=NULL,*premin=NULL;//pre1ָ��max��ǰ����pre2ָ����Сֵ��ǰ��
	int max=p->data,min=p->data;
	double sum=0;
	int len=0;
	while(p->next){
		if(p->next->data > max){
			premax=p;
			max=p->next->data;
		}
		if(p->next->data < min){
			premin=p;
			min=p->next->data;
		}
		sum+=p->data;
		len++;
		p=p->next;
	}
	len++;
	sum+=p->data;//���нڵ����� 
	if(premax->next==premin)
		premax->next=premin->next->next;
	else if(premin->next==premax)
		premin->next=premax->next->next; 
	else{
		premax->next=premax->next->next;
		premin->next=premin->next->next;
	}
	avg=(sum-min-max)/(len-2);
	cout<<sum<<endl;
	return avg;
} 
int main()
{
	LinkList L;
	List_TailInsert(L);
	cout<<"ɾ��ǰ"<<endl; 
	printListNode(L);
	double avg=0;
	cout<<"ɾ����ƽ��ֵΪ��"<<getAverage(L,avg)<<endl;
	cout<<"ɾ����"<<endl;
	printListNode(L); 
}
