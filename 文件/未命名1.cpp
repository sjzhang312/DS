#include<iostream>
using namespace std;
#define SIZE 10
typedef struct{
	short level;
	unsigned flags;
	char fd;
	unsigned char hold;
	short bsize;
	unsigned char *buffer;
	unsigned char *curp;
	unsigned istemp;
	short token;
}FILE;
struct Student_type{
	char name[10];
	int num;
	int age;
	char addr[15];
}stu[SIZE];
void save(){
	File* fp;
	int i;
	if((fp==fopen("stu.dat","wb"))==NULL){
		printf("cannot open file\n");
		return ;
	}
	for(i=0;i<SIZE;i++)
		if(fwite(&stu[i],sizeof(struct Student_type),1,fp)!=1)
			printf("file write error\n");
	fclose(fp);
}
int main() 
{
	int i;
	printf("Please enter data of student:\n");
	for(int i=0;i<SIZE;i++)
	scanf("%s%d%d%s",stu[i].name,stu[i].num,stu[i].name,stu[i].num);
	save();
	return 0;
}
