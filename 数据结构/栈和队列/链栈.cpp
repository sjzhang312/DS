#include<iostream>
using namespace std;
typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node *next;
}*LinkStack,StackNode;

LinkStack push(StackNode* &s,int e){
	StackNode *p=new StackNode;
	p->data=e;
	p->next=s;
	s=p;
	return s;
}
LinkStack pop(StackNode* &s,int &e){
	if(s==NULL)return NULL;
	e=s->data;
	StackNode *p=s;
	s=s->next;
	delete p;
	return s;
}
void printStackNode(StackNode* s){
	StackNode *p=s;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main()
{
//	int e1;
	LinkStack s;
	push(s,3);
	push(s,2);
	push(s,1);
	printStackNode(s);
	cout<<endl;
//	int e1;
	pop(s,e1);
	printStackNode(s);
}
 
