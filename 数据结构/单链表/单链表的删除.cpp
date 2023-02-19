#include"01.cpp" 

LinkList List_Tailinsert(LinkList &L){
	int x;
	L=(LinkList)malloc(sizeof(LNode));
	LNode *r=L;
	cin>>x;
	while(x!=9999){
		LNode *s=new LNode;
		s->val=x;
		r->next=s;
		r=s;
		cin>>x;
	}
	r->next=NULL;
	return L; 
} 


