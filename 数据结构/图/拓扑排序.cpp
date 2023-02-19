#include<stack>
#include<vector>
#include"�ڽӱ�������ͼ.cpp"
using namespace std;
stack<int>s;//ջ��ʼ�� 
const int maxn=100;
vector<int>indegree(100);
void visit(GraphAdjList G){//ͳ�ƽ����� 
	int i,j;
	EdgeNode *p;
	
	for(i=0;i<G.numVertexes;i++){
		p=G.adjlist[i].firstedge;
		while(p){
			int val=p->adjvex; 
			indegree[val]+=1; 
			p=p->next;
		}
	}
	cout<<"ÿ���������"<<endl; 
	for(i=0;i<G.numVertexes;i++)cout<<indegree[i]<<" ";
}


bool TopologicalSort(GraphAdjList G){
	EdgeNode *p;
	int i,j;
	for(i=0;i<G.numVertexes;i++){
		if(indegree[i]==0)s.push(i);
	}
//	cout<<endl<<s.top();
	int count=0,cur;
	cout<<endl<<"��������Ϊ��";
	while(!s.empty()){
		cur=s.top();
		cout<<cur;
		count++;
		s.pop();//ջ��Ԫ�س�ջ
//		for(p=G.adjlist[cur].firstedge;p;p=p->next){
//			int v=p->adjvex;//�߱���
//			if(!(--indegree[v]))
//			s.push(v); 				
//		}
		EdgeNode *p=G.adjlist[cur].firstedge;		
		while(p){
			int v=p->adjvex;
			if(--indegree[v]==0)
				s.push(v);
			p=p->next;
		}
	}
//	cout<<count<<endl;
	if(count<G.numVertexes)return false;//����ʧ�� 
	return true;
}
int main(){

    GraphAdjList G;

    Create(G);
    visit(G);//����ÿ��������� 
    TopologicalSort(G);//�������� 
}

/*
���붥�����ͱ���:
5 5
���붥����Ϣ:
0 1 2 3 4
�����(Vi,Vj)�е��±�i,j:
0 1
1 3
2 3
2 4
3 4
�ڽӱ�Ϊ:
(0,1)
(1,3)
(2,4)(2,3)
(3,4)

ÿ���������
0 1 0 2 2
��������Ϊ��20134
*/ 

