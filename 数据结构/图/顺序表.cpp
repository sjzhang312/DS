//2.2 
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define MaxSize 10
typedef struct{
	int data[MaxSize];
	int length;
}SqList; 
//ɾ����ֵ�ڸ���ֵs��t֮�䣨��5�⣩ 
bool delete_st(SqList &L,int s,int t){
	if(L.length==0||s>=t)
	return false;
	int k=0;
	for(int i=0;i<L.length;i++){
		if(L.data[i]<s||L.data[i]>t){
			L.data[k++]=L.data[i];
		}
	}
	L.length=k;
	return true;		
} 
//���������ɾ����ֵ�ڸ���ֵs��t֮��(��4��)
bool delete_sort(SqList &L,int s,int t){
	int i,j;
	if(L.length==0||s>=t)
	return false;
	for(i=0;i<=L.length-1&&L.data[i]<s;i++);//�ҵ���һ������s��ֵ���±� 
	//i=1
	
	for(j=L.length-1;j>i&&L.data[j]>t;j--);//�ҵ���һ��С��t��ֵ���±� 
	//j=2
//	cout<<i<<j<<endl;
	for(;j<L.length-1;i++,j++){
		L.data[i]=L.data[j+1];
	}
	L.length=i;
	return true;
} 
//5
//3 1 4 2 5
//���������ɾ��������ֵ�ظ���Ԫ��,ʹ��������Ԫ�ص�ֵ����ͬ (��6��)
//8
//1 1 3 4 5 5 7 9
bool delete_cc(SqList &L){
	if(L.length==1)return true;
	else if(L.length==2 && (L.data[0]==L.data[1])){
		L.length-=1;
		return true;
	} 
	int k=L.data[0];//ǰ�治���ظ���Ԫ��
	int cnt=1;//��¼�����飨�����ظ�Ԫ�أ� 
	for(int j=1;j<L.length;j++){
		if(L.data[j]!=k){
			k=L.data[j];//���²����ظ�Ԫ�ص�ֵ 
			L.data[cnt]=L.data[j];
			cnt++;
		}
	} 
	L.length=cnt;
	return true;
	
}
int main(){
	SqList L;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>L.data[i];
	}
	L.length=n;
	//delete_sort(L,4,8);
	delete_cc(L);

	//delete_st(L,2,4);
	for(int i=0;i<L.length;i++){
		cout<<L.data[i]<<" ";
	}
} 
