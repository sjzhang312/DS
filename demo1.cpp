#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<unordered_map> 
using namespace std;

struct student{
	string s;
	int score;
}stu[100010]; 
bool cmp(student x,student y){
	return x.score!=y.score?x.score>y.score:x.s<y.s;
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>stu[i].s>>stu[i].score;
		
	}
	int temp;
	string c;
	int num=1;
	for(int i=0;i<m;i++){
		cin>>temp>>c;
		int count=0,sum=0;
		vector<student>ans;
		if(temp==1){
			printf("Case %d: %d %s\n",num,temp,c.c_str());
			num++;
			for(int j=0;j<n;j++){
				if(stu[j].s[0]==c[0]){
					ans.push_back(stu[j]);
					
				}
			}
			sort(ans.begin(),ans.end(),cmp);
			for(int i=0;i<ans.size();i++)
				printf("%s %d\n",ans[i].s.c_str(),ans[i].score);
		}else if(temp==2){
			for(int j=0;j<n;j++){
				if(stu[j].s.substr(1,3)==c){
					count++;
					sum+=stu[j].score;
				}
			}
			if(count!=0)
			printf("%d %d",count,sum);
			else printf("NA\n");
		}else if(temp==3){
			int count=0;
			printf("Case %d: %d %s\n",num,temp,c.c_str());
			num++;
			unordered_map<string,int>m;
			for(int j=0;j<n;j++){
				if(stu[j].s.substr(4,6)==c){
					m[stu[j].s.substr(1,3)]++;
				}
			}
			
			for(auto it=m.begin();it!=m.end();it++){
				ans.push_back({it->first,m[it->first]});
			}
			sort(ans.begin(),ans.end(),cmp);
			
			for(int j=0;j<ans.size();j++)
			printf("%s %d\n",ans[j].s.c_str(),ans[j].score);
		}
		
		
	}
}
