#include<iostream>
#include<vector>
using namespace std;
struct Stu{
	string name;//ѧ������ 
	int k;//������Ʒ���� 
	//string sn;//k����Ʒ��� 
}stu[1010];
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>v;
	for(int i=0;i<m;i++){
		int s;
		scanf("%d",&s);
		v.push_back(s);
	} 
	int sname=0,sum=0;
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].k;
		int flag=1;
		int t=1;
		for(int j=0;j<stu[i].k;j++){
			int sn;//ѧ����Ʒ��� 
			scanf(" %d",&sn);
			for(int cnt=0;cnt<v.size();cnt++){
				if(sn==v[cnt]){
					if(flag){
					printf("%s:",stu[i].name.c_str());
					sname++;
					flag=0;
					}
					t=0;
					printf(" %04d",sn); 
					sum++;
				}
			}
		}
		if(t==0)
		cout<<endl;
	}
	printf("%d %d",sname,sum);
}
