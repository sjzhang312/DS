#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cctype>
#include<unordered_map>
using namespace std;
struct Student{
	string shool;
	int tws;
	int ns;
	double score;
	string s;
}stu[100010];
bool compare(struct Student x,struct Student y){
	if(x.tws!=y.tws)
	return x.tws>y.tws;
	else if(x.ns!=y.ns)
	return x.ns<y.ns;
	else
	return x.shool<y.shool;
}
int main()
{
	int n;
	scanf("%d",&n);
	unordered_map<string,double>m;
	unordered_map<string,int>m1;
	for(int i=0;i<n;i++){
		cin>>stu[i].s>>stu[i].score>>stu[i].shool;
		for(int j=0;j<stu[i].shool.length();j++)
		{
			stu[i].shool[j ]=tolower(stu[i].shool[j]);
		}//��ѧУ����ȫ����Сд 
		if(stu[i].s[0]=='B')
		stu[i].score/=1.5;
		else if(stu[i].s[0]=='T')
		stu[i].score*=1.5;
		m[stu[i].shool]+=stu[i].score;//m��¼ÿ��ѧУ���ܷ��� 
		m1[stu[i].shool]++;//m1��¼ÿ��ѧУ��ѧ�������� 
	}
	vector<Student>ans;
	for(auto it=m.begin();it!=m.end();it++)//������ 
	ans.push_back(Student{it->first,(int)m[it->first],m1[it->first]});//��������浽�ṹ���в�����ans��ĩβ 
	sort(ans.begin(),ans.end(),compare);
	printf("%d\n",m.size());
	int rank=0,pres=-1;
	for(int i=0;i<ans.size();i++){
		if(pres!=ans[i].tws)
		rank=i+1;
		pres=ans[i].tws;
		printf("%d ",rank);
		cout << ans[i].shool;
        printf(" %d %d\n", ans[i].tws, ans[i].ns);

	}
}
