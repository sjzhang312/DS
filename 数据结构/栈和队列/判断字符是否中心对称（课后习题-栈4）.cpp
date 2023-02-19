#include<iostream>
#include<vector>

using namespace std;
const int maxn=10010;
typedef struct Node{
	char data;
	Node *next;
}*LinkList,ListNode; 
LinkList insert(LinkList &L){
	L=(LinkList)malloc (sizeof(ListNode));
//	ListNode *L=new ListNode();
	ListNode *r=L;
	char x;
	while(cin>>x){
		ListNode *p=(ListNode*)malloc(sizeof(ListNode));
		p->data=x;
		r->next=p;
		r=p;

	} 
	r->next=NULL;
	return L;
}
void printLinkList(LinkList L){
	L=L->next;
	ListNode* p=L;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
int  dc(LinkList L,int n){
	ListNode *p=L->next;
	char s[n/2];
	int i;
	for(i=0;i<n/2;i++){
		s[i]=p->data;
		p=p->next;
	}
	i--;
	if(n%2!=0)p=p->next;
	while(p!=NULL&&p->data==s[i]){
		i--;
		p=p->next;
	}
	cout<<i<<endl;
	if(i==-1)return 1;
	else return 0;
}
int main(){
	LinkList L;
	insert(L);
	printLinkList(L);
	cout<<dc(L,5);
}
