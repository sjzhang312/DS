#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main() 
{
    int n,a,b,M;
//  vector<int> hash(100000,0);
	int hash[100000];
    scanf("%d",&n);
    vector<int> couple(100000,0);
    vector<int>single;
    for (int i=0;i<n;i++) {
        scanf("%d%d",&a,&b);
        couple[a] = b;
        couple[b] = a;
    }
    scanf("%d", &M);
    int id[M];
	for(int i=0;i<M;i++){
		cin>>id[i];
		hash[id[i]]=1;//hash�����¼���Ƿ�μӴ˴ξۻ� 
	}
	for(int i=0;i<M;i++){
		//û�ж����hash����0
		//�ж����Ƕ���û���� 
		if(hash[id[i]]&&hash[couple[id[i]]]==0)
		single.push_back(id[i]);
	}
	
	cout<<single.size()<<endl;
	sort(single.begin(),single.end());
	for(int i=0;i<single.size();i++){
		if(i!=0)printf(" ");
		printf("%05d",single[i]);
	}
} 
