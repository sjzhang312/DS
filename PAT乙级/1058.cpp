#include<iostream>
#include<vector>
#include<set>
using namespace std;
struct Node{
	int fullscore;//���� 
	int k;//ѡ�����
	int t;//��ȷѡ����� 
}node[110]; 
int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<set<char>>v(m);
	vector<int>wrong(m);
	for(int i=0;i<m;i++){
		cin>>node[i].fullscore>>node[i].k>>node[i].t;
		for(int j=0;j<node[i].t;j++){
			char c;
			scanf(" %c",&c);
			v[i].insert(c);
	}	
	}
	int kk;
	char e;
	for(int cnt=0;cnt<n;cnt++){
		int sum=0;
		scanf("\n");
		for(int i=0;i<m;i++){//һ��ѧ�������д� 
		if(i!=0)
		scanf(" ");
		set<char>st;
		scanf("(%d",&kk);
		for(int j=0;j<kk;j++){//ÿ�����ѧ���� 
		scanf(" %c",&e);
		st.insert(e);
		} 
		scanf(")");
		if(st==v[i]){
			sum+=node[i].fullscore;
		}
		else
		wrong[i]++;
		}
		cout<<sum;
   }
   int maxwrong=0;
   for(int i=0;i<m;i++){
   if(wrong[i]>maxwrong)
   maxwrong=wrong[i]; 
   }
   if(maxwrong==0)
   printf("Too simple");
   else {
   printf("%d",maxwrong);
   for(int i=0;i<m;i++){
   	if(wrong[i]==maxwrong)
   	printf(" %d",i+1);
   } 
   }
}
