/*
���ǵ�ÿ��ֻ�ܷ���һ���ʺ�ÿ��Ҳֻ�ܷ���һ���ʺ�
��ô�����n�лʺ����ڵ��к�����д������ô�ͻ���һ��1~n���������� 
*/
#include<iostream>
#include<algorithm>
#include<cstring> 
#include<cmath>
using namespace std;
const int maxn=11;
int n,p[maxn],hashTable[maxn];
int cnt=0;

void generateP(int index){
	if(index==n+1){//�ݹ�߽� 
		bool flag=true;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(abs(i-j)==abs(p[i]-p[j]))flag=false;
			}
		}
		if(flag)cnt++;
		return ;
	}
	
	for(int i=1;i<=n;i++){
		if(hashTable[i]==false){
			p[index]=i;
			hashTable[i]=true;
			generateP(index+1);
			hashTable[i]=false;
		}
	}
}
int main()
{
	cin>>n;
	generateP(1);
	cout<<cnt;
}
 
