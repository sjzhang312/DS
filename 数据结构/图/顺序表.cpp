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
//删除其值在给定值s与t之间（第5题） 
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
//在有序表中删除其值在给定值s到t之间(第4题)
bool delete_sort(SqList &L,int s,int t){
	int i,j;
	if(L.length==0||s>=t)
	return false;
	for(i=0;i<=L.length-1&&L.data[i]<s;i++);//找到第一个大于s的值的下标 
	//i=1
	
	for(j=L.length-1;j>i&&L.data[j]>t;j--);//找到第一个小于t的值的下标 
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
//从有序表中删除所有其值重复的元素,使表中所有元素的值均不同 (第6题)
//8
//1 1 3 4 5 5 7 9
bool delete_cc(SqList &L){
	if(L.length==1)return true;
	else if(L.length==2 && (L.data[0]==L.data[1])){
		L.length-=1;
		return true;
	} 
	int k=L.data[0];//前面不是重复的元素
	int cnt=1;//记录新数组（不含重复元素） 
	for(int j=1;j<L.length;j++){
		if(L.data[j]!=k){
			k=L.data[j];//更新不是重复元素的值 
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
