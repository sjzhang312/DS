#include"01.cpp"
int cnt=0;
bool flag=true;
/*
һ��˳����洢�ṹΪû��ͷ�ڵ�ĵ�����ʹ�õݹ鷽��ɾ��������λ��Ϊ�����Ľ�
�㣬����(1,2,3,4,5),ɾ����Ľ��Ϊ(2,4)

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
	r->next=NULL;//�����������β���һ��Ҫ�ÿ� 
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
	cout<<"ԭ����Ϊ��"; 
	printLinkList(first);
	delete_odd(first);
	cout<<endl<<"������Ϊ��";
	printLinkList(first);
}
