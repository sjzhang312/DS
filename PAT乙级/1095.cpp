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
	scanf("%d %d",&n,&m);//scanf��printf��cin coutЧ�ʸߡ�
	
	for(int i=0;i<n;i++)
	cin>>stu[i].s>>stu[i].score;
	int b[10010],summ[10010],num=1;
	for(int i=0;i<m;i++){
		cin>>t>>c;
        /*�ڴ�����ʱ��Ҫ��scanf("%d %s",t,c.c_str());�﷨��ԣ�������stu[i].s.substr()==cʱ ��
		ÿ�β������c_str()ֵ����ʹ���԰� ==c����c_str(),����ύʱ�ᳬʱ */ 
		vector<student>ans;
		int flag=0;
		// Ϊ����C���ݣ���C��û��string���ͣ��ʱ���ͨ��string�����ĳ�Ա����c_str()��string����ת����C�е��ַ�����ʽ��
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
			//for(auto it:m) //�����ڱ��������л���������ÿһ��Ԫ��
			//ans.push_back({it->first,it->second});
			ans.push_back(student{it->first,m[it->first]});
			sort(ans.begin(),ans.end(),compare);
			for (int j = 0; j < ans.size(); j++)
			//��map��ŵ�vector(�ṹ��)��,vector�������Ա�ʾmap�ļ�ֵ�� 
			printf("%s %d\n", ans[j].s.c_str(), ans[j].score);		
			}
			else
			printf("NA\n");
			
		}	
	}
    //���һ�����Ե��cin\cout����scanf\printf����AC 
} 
