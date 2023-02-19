#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1010;
int w[maxn],c[maxn];
int n,v,maxvalue=0;

void DFS(int index,int sumw,int sumc){
	if(index==n+1){
		if(sumw<=v&&sumc>maxvalue)maxvalue=sumc;
		return;
	}
	DFS(index+1,sumw,sumc);
	DFS(index+1,sumw+w[index],sumc+c[index]);
} 
/*
	��ѡindex����Ʒ����ôsumw��sumc���䣬������ǰ��DFS��index+1��sumw,sumc) ������֧��
	���ѡ�����index����Ʒ����ôsumw�����ϵ�ǰ��Ʒ������w[index],sumc�����ϵ�ǰ��Ʒ�ļ�ֵ��c[index]
	,����������index+1����Ʒ����ǰ��DFS��index+1��sumw+w[index],sumc+c[index]) 
	
	ֻҪindex����n����˵���Ѱ�n����Ʒ������ϣ���ʱsumw��sumc������ѡ��Ʒ�����������ܼ�ֵ
	���sumw������v��sumc����maxvalue�����ǵ�ǰ��ѡ�ķ������Եõ�����ļ�ֵ����sumc����maxvalue 
*/
int main()
{
	cin>>n>>v;
	for(int i=1;i<=n;i++)cin>>w[i];
	for(int i=1;i<=n;i++)cin>>c[i];
	DFS(1,0,0);
	cout<<maxvalue;
	return 0;
 } 
