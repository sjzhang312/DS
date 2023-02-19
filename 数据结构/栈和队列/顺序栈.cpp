#include<iostream>
#define MAXSIZE 100
using namespace std;
	
typedef int ElemType;
typedef struct {
	ElemType data[MAXSIZE];
	int top;
}SqStack;
void initStack(SqStack &s){
	s.top=-1;
}
bool Push(SqStack &s,ElemType x){
	if(s.top==MAXSIZE-1)return false;
	s.data[++s.top]=x;
	return true;
} 
bool Pop(SqStack &s,ElemType &x){
	if(s.top==-1)return false;
	x=s.data[s.top];
	s.top--;
	return true;
}
int GetTop(SqStack &s){
	int x;
	if(s.top==-1)return false;
	x=s.data[s.top];
	return x;
	
}
void showStack(SqStack s){
	int i=s.top;
	for(;i>=0;i--)cout<<s.data[i];
	return ;
}
int main(){
	SqStack s;
	initStack(s);
	Push(s,3);
	Push(s,2);
	Push(s,1);
	showStack(s);
	cout<<endl<<GetTop(s)<<endl;
	int e1;
	Pop(s,e1);
	showStack(s); 
}
