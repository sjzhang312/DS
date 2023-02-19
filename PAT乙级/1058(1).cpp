#include<iostream>
#include<vector>
#include<set>
using namespace std;
struct Node{
	int fullscore;//满分 
	int k;//选项个数
	int t;//正确选项个数 
}node[110]; 
int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<set<char>>v;
	vector<int>wrong(m);
	for(int i=0;i<m;i++){
		cin>>node[i].fullscore>>node[i].k>>node[i].t;
		set<char>s;
		for(int j=0;j<node[i].t;j++){
			char c;
			scanf(" %c",&c);
			s.insert(c);
	}
		v.push_back(s);
	}
	int kk;
	char e;
	for(int cnt=0;cnt<n;cnt++){
		int sum=0;
		scanf("\n");
		for(int i=0;i<m;i++){//一个学生的所有答案 
		if(i!=0)
		scanf(" ");
		set<char>st;
		scanf("(%d",&kk);
		int flag=1;
		for(int j=0;j<kk;j++){//每道题的学生答案 
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
		cout<<sum<<endl;
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
