/*
7
4 1 3 2 6 5 7
1 2 3 4 5 6 7
*/
 #include<iostream>
 #include<algorithm>
 #include<cstring>
 #include<queue>
 using namespace std;
 struct node{
 	int data;
 	node *lchild,*rchild;
 };
 const int maxn=15;
 int pre[maxn],in[maxn],post[maxn];
 int n;
 
node* create(int preL,int preR,int inL,int inR){
 	if(preL>preR)return NULL;
 	node* root=new node;
 	root->data=pre[preL];
 	int k;
 	for(k=inL;k<=inR;k++){
 		if(in[k]==pre[preL])
 		break;
	 }
	 int numLeft=k-inL;
	 
	 root->lchild=create(preL+1,preL+numLeft,inL,k-1);
	 root->rchild=create(preL+numLeft+1,preR,k+1,inR);
	 return root;
 } 
 void BFS(node* root){
 	queue<node*>q;
 	q.push(root);
 	while(!q.empty()){
 		node* now=q.front();
 		q.pop();
 		printf("%d",now->data);
 		if(now->lchild!=NULL)q.push(now->lchild);
 		if(now->rchild!=NULL)q.push(now->rchild);
	 }
 }
 int main()
 {
 	cin>>n;
 	for(int i=0;i<n;i++)scanf("%d",&pre[i]);
 	for(int i=0;i<n;i++)scanf("%d",&in[i]);
 	node* root=create(0,n-1,0,n-1);
 	BFS(root);
 	return 0;
 }
