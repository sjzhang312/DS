#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
struct student{
	string s;
	int score;
}stu[10010];
bool compare(struct student s1,struct student s2){

	return s1.score!=s2.score?s1.score>s2.score:s1.s<s2.s;
}

int main()
{
	int n,m;
	int t;
	string c;
	scanf("%d %d",&n,&m);//scanf和printf比cin cout效率高～
	
	for(int i=0;i<n;i++)
	cin>>stu[i].s>>stu[i].score;
	int b[10010],summ[10010],num=1;
	for(int i=0;i<m;i++){
		cin>>t>>c;
        /*在此输入时不要用scanf("%d %s",t,c.c_str());语法虽对，但下面stu[i].s.substr()==c时 ，
		每次不会更新c_str()值，即使可以把 ==c换成c_str(),最后提交时会超时 */ 
		vector<student>ans;
		int flag=0;
		// 为了与C兼容，在C中没有string类型，故必须通过string类对象的成员函数c_str()把string对象转换成C中的字符串样式。
		if(t==1){
			printf("Case %d: %d %s\n",num,t,c.c_str());
			num++;
				for(int j=0;j<n;j++){
					if(stu[j].s[0]==c[0]){
						ans.push_back(stu[j]);
						flag=1;
					}
			   	}
				if(flag){
				sort(ans.begin(),ans.end(),compare);
				for(int i=0;i<ans.size();i++)
				printf("%s %d\n",ans[i].s.c_str(),ans[i].score);
				//cout<<ans[i].s<<" "<<ans[i].score<<endl;
				}
				else
				printf("NA\n");
			}
		else if(t==2){
			int count=0,sum=0;
			printf("Case %d: %d %s\n",num,t,c.c_str());
			num++;
			for(int j=0;j<n;j++){
				if((stu[j].s.substr(1,3))==c){
					count++;
					sum+=stu[j].score;
				}
			}
			if(count!=0)
			printf("%d %d\n",count,sum);
			else
		    printf("NA\n");
		
		}
		else if(t==3){
			int count=0;
			printf("Case %d: %d %s\n",num,t,c.c_str());
			num++;
			unordered_map<string,int>m;
			for(int j=0;j<n;j++){
				if(stu[j].s.substr(4,6)==c){
					m[stu[j].s.substr(1,3)]++;
					count++;
				}
			} 
			if(count!=0){
			for(auto it=m.begin();it!=m.end();it++)
			//for(auto it:m) //用来在遍历过程中获得容器里的每一个元素
			//ans.push_back({it->first,it->second});
			ans.push_back(student{it->first,m[it->first]});
			sort(ans.begin(),ans.end(),compare);
			for (int j = 0; j < ans.size(); j++)
			//把map存放到vector(结构体)中,vector变量可以表示map的键值对 
			printf("%s %d\n", ans[j].s.c_str(), ans[j].score);		
			}
			else
			printf("NA\n");
			
		}	
	}
    //最后一个测试点把cin\cout换成scanf\printf即可AC 
} 
