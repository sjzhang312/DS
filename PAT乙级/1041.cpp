#include<iostream>
#include<cstdio>
using namespace std;
struct student{
	char zkz[20];
	int shiji;
	int seat;
};
int main() 
{
	int N,M,cha;
	cin>>N;
	student *stu=new student[N];
	for(int i=0;i<N;i++){
		scanf("%s %d %d",stu[i].zkz,&stu[i].shiji,&stu[i].seat);
	}
	cin>>M;
	for(int i=0;i<M;i++){
		cin>>cha;
		for(int j=0;j<N;j++){
			if(stu[j].shiji==cha)
			printf("%s %d",stu[j].zkz,stu[j].seat);
//			cout<<stu[j].zkz<<" "<<stu[j].seat;
		}
		printf("\n");
	}
}
