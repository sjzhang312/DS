#include<iostream>
#include<cstring>

using namespace std;
struct student{
	string name;//定义姓名字符串的长度
    char id[11];//定义学号字符串的长度
    int score;
};
int main()
{
    int n;
    scanf("%d",&n);
    student* stu=new student[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d",stu[i].name.c_str(),stu[i].id,&stu[i].score);
    }
    int max=stu[0].score;
    int min=stu[0].score;
    int count1=0,count2=0;
    for(int i=1;i<n;i++){
        if(stu[i].score>max){
            max=stu[i].score;
            count1=i;
        }
        if(stu[i].score<min){
            min=stu[i].score;
            count2=i;
        }
    }
    printf("%s %s\n",stu[count1].name.c_str(),stu[count1].id);
    printf("%s %s",stu[count2].name.c_str(),stu[count2].id);
}
