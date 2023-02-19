
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//using namespace std;
//struct student{
//	string id;
//	int gp;
//	int gm;
//	int gf;
//	int g;
//}stu[10010]; 
//bool cmp(student a,student b){
//	return a.g!=b.g?a.g>b.g:a.id<b.id;
//}
//map<string,int>idx;
//int main()
//{
//	int p,m,n,score,cnt=1;
//	string s;
//	cin>>p>>m>>n;
//	vector<student>ans,v;
//	for(int i=0;i<p;i++){
//		cin>>s>>score;
//		if(score>=200){
//			ans.push_back({s,score,-1,-1,0});
//			idx[s]=cnt++;
//		}
//	}
//	for(int i=0;i<m;i++){
//		cin>>s>>score;
//		if(idx[s]!=0)
//		ans[idx[s]-1].gm=score;
//	}
//	for(int i=0;i<n;i++){
//		cin>>s>>score;
//		if(idx[s]!=0){
//			int temp=idx[s]-1;
//			ans[temp].gf=ans[temp].g=score;
//			if(ans[temp].gm>ans[temp].gf)
//			ans[temp].g=(ans[temp].gm*0.4+ans[temp].gf*0.6+0.5); 
//		}
//	}
//	
//	for(int i=0;i<ans.size();i++)
//	if(ans[i].g>=60) v.push_back(ans[i]);
//	sort(v.begin(),v.end(),cmp);
//	for(int i=0;i<v.size();i++)
//	printf("%s %d %d %d %d\n",v[i].id.c_str(),v[i].gp,v[i].gm,v[i].gf,v[i].g);
//}







#include<iostream>
#include<algorithm>
#include<vector>
#include<map> 
using namespace std;
map<string,int>idx;
struct student{
	string id;
	int gp;
	int gm;
	int gf;
	int g;
}stu[10010];
bool compare(student a,student b){
	return a.g!=b.g?a.g>b.g:a.id<b.id;
}
int main(){
	int p,m,n,score,cnt=1;
	cin>>p>>m>>n;
	string s;
	vector<student>ans,v;
	for(int i=0;i<p;i++){
		cin>>s>>score;
		if(score>=200){
			ans.push_back(student{s,score,-1,-1,0});//vector数组应该是从0开始 
			idx[s]=cnt++;//编号是从1开始 
		}
	}
	for(int i=0;i<m;i++){
		cin>>s>>score;
		if(idx[s]!=0){
			ans[idx[s]-1].gm=score; 
		}
	}
	for(int i=0;i<n;i++){
		cin>>s>>score;
		if(idx[s]!=0){
			int temp=idx[s]-1;
			ans[temp].g=ans[temp].gf=score;
			if(ans[temp].gm>ans[temp].gf)
			ans[temp].g=ans[temp].gm*0.4+ans[temp].gf*0.6+0.5;
		}
	}
	for(int i=0;i<ans.size();i++){
		if(ans[i].g>=60)v.push_back(ans[i]);	
	}
	sort(v.begin(),v.end(),compare); 
	for(int i=0;i<v.size();i++){
		printf("%s %d %d %d %d\n",v[i].id.c_str(),v[i].gp,v[i].gm,v[i].gf,v[i].g);
	}
	
} 
