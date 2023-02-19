#include<iostream>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
int cnt=0;
typedef struct CSNode{
	char data;
	struct CSNode *firstchild,*nextsibling; 
}CSNode,*CSTree;
CSTree CreateCSTree(){
	char ch;
	CSTree T;
	cin>>ch;
	if(ch=='#')return NULL;
	else{
		T=(CSTree)malloc(sizeof(CSNode));
		T->data=ch;
		T->firstchild=CreateCSTree();
		T->nextsibling=CreateCSTree();
	}
}

void VisitCSTree(CSTree T) {
	cout<<"当前结点的值"<<T->data<<",";
	cout<<"它的兄弟结点："; 
	if (T->firstchild) {
		cout << T->firstchild->data; 
		CSTree p = T->firstchild;
		while (p->nextsibling) {
			cout << " , " << p->nextsibling->data;
			p = p->nextsibling;
		}
		
	}
	cout << endl;
}

void PreOrderVisitTree(CSTree T) {
	if (T)
	{
		VisitCSTree(T);
		PreOrderVisitTree(T->firstchild);
		PreOrderVisitTree(T->nextsibling);
	}
}

//树的深度
int Height(CSTree T){
	int hc,hs;
	if(T==NULL)return 0;
	else{
		hc=Height(T->firstchild);
		hs=Height(T->nextsibling);
		if(hc+1>hs)return hc+1;//第一子女树严格大于右兄弟树(如果等于返回的也是右兄弟树的高度） 
		else return hs;
	}
}
//叶子结点数
void countleaves(CSTree T){
	if(T==NULL)return ;
	if(T->firstchild==NULL)cnt++;
	countleaves(T->firstchild);
	
	countleaves(T->nextsibling);
}
int leaves(CSTree T){
	if(T==NULL)return 0; 
	if(T->firstchild==NULL)return 1+leaves(T->nextsibling);
	else return leaves(T->firstchild)+leaves(T->nextsibling);
} 

int main()
{
	CSTree T;
	T=CreateCSTree();
//	VisitCSTree(T);
	PreOrderVisitTree(T);
	cout<<"树高："<<Height(T)<<endl;
	countleaves(T);
	cout<<"叶子结点："<<cnt<<endl;
	cout<<leaves(T);
}
/*
ABE##C#D###
B , C , D
*/

