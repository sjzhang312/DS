#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
const int maxn=110;
int f[maxn];//f[i]��ʾ�±�Ϊiʱ��ǰ����½������еĳ��� 
int a[maxn];
//����DP 
int main()
{
	//������ÿһ��f[i]�Ĳ��½������� 
	vector<vector<int>>v(110); 
	int num=0,ans=-1;
	while(cin>>a[num]){
		num++;
	}
	for(int i=0;i<num;i++){
		f[i]=1;//��ʼ������Ϊһ�����½�������
		v[i].push_back(a[i]);
		for(int j=0;j<i;j++){
			if(a[i]>=a[j]&&f[j]+1>f[i]){
				v[i].push_back(a[j]);//�����Ĳ��½�������װ���±�Ϊi ��vector���� 
				//��̬ת��
				f[i]=f[j]+1 ;
			}
		}
		ans=max(ans,f[i]); 
	} 
//	for(int i=0;i<num;i++)
//	cout<<f[i]<<" ";
//	cout<<endl;
	printf("max=%d\n",ans);
//	cout<<endl<<v[0].size();
//	cout<<endl<<v[1].size();
//	cout<<v[2].size()<<endl;
	for(int i=0;i<v.size();i++){
		int flag=1;
		if(v[i].size()==ans){
			sort(v[i].begin(),v[i].end());
			for(int j=0;j<ans;j++){
				if(!flag)cout<<" ";
				cout<<v[i][j];
				flag=0;
			}
			break;
		}
		
	}

	
 } 
