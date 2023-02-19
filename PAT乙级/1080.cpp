#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
struct student{
	string name;
	int gp;
	int gm;
	int gf;
	int g;
};
bool cmp(student a,student b){
	return a.g!=b.g?a.g>b.g:a.name<b.name;
}
map<string,int> idx;
int main()
{
	int p,m,n,score,cnt=1;
	scanf("%d %d %d",&p,&m,&n);
	vector<student>ans,v;
	string s;
	for(int i=0;i<p;i++){
		cin>>s>>score;
		if(score>=200){
			ans.push_back({s,score,-1,-1,0});
			idx[s]=cnt++;
		}
	}
	for(int i=0;i<m;i++){
		cin>>s>>score;
		if(idx[s]!=0)
		ans[idx[s]-1].gm=score;
	}
	for(int i=0;i<n;i++){
		cin>>s>>score;
		if(idx[s]!=0){
			int temp=idx[s]-1;
			ans[temp].gf=ans[temp].g=score;
			if(ans[temp].gm>ans[temp].gf)
			ans[temp].g=int(ans[temp].gm*0.4+ans[temp].gf*0.6+0.5);
		}
	}
	for(int i=0;i<ans.size();i++)
	if(ans[i].g>=60) v.push_back(ans[i]);
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++)
	printf("%s %d %d %d %d\n",v[i].name.c_str(),v[i].gp,v[i].gm,v[i].gf,v[i].g);
} 
