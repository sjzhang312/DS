//��n�����m���ߣ��ٸ�k�����ϡ�����k��������������жϡ�ÿ������S��������ֶ��ǽ���ţ�
//��������ͼ�Ƿ���϶��㸲�ǵĶ��壨�����е�m�������˵Ľ�㣬�Ƿ�����һ�������Լ���S�У���
//����ǣ����Yes�������No��
#include<iostream>
#include<vector>
#include<set>
using namespace std;

struct node{
	int a;
	int b;
};
int main(){
	int N,M,e,k,x;
	cin>>N>>M;
	vector<node>g(M);
	for(int i=0;i<M;i++){
		cin>>g[i].a>>g[i].b;
	}
	
	
	cin>>k;
	while(k--){
		cin>>e;
		set<int>s;
		for(int j=0;j<e;j++){
			scanf("%d",&x);
			s.insert(x);
		}
		int flag=1;
		for(int i=0;i<M;i++){
			if(s.find(g[i].a)==s.end()&&s.find(g[i].b)==s.end()){
				cout<<"No"<<endl;
				flag=0;
				break;
			}
		}
		if(flag)cout<<"Yes"<<endl;
	}
} 
