#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct student{
    int a;
    int b;
    int c;
    int zongfen;
}stu[100010];
bool compare(struct student x,struct student y){
    if(x.zongfen==y.zongfen){
            if(x.b==y.b)
            return x.a<y.a;
            return x.b>y.b;
    }
    return x.zongfen>y.zongfen;
}
int main()
{
    int N,L,H,count=0,t=0;
    scanf("%d %d %d",&N,&L,&H);


    vector<student>v1;
    vector<student>v2;
    vector<student>v3;
    vector<student>v4;

    for(int i=0;i<N;i++){
        scanf("%d %d %d",&stu[i].a,&stu[i].b,&stu[i].c);
        stu[i].zongfen=stu[i].b+stu[i].c;
    if(stu[i].b>=L&&stu[i].c>=L){
             count++;
        if(stu[i].b>=H&&stu[i].c>=H)
            v1.push_back(stu[i]);//在尾部加入一个数据
        else if(stu[i].b>=H&&stu[i].c<H)
            v2.push_back(stu[i]);
        else if(stu[i].b<H&&stu[i].c<H&&stu[i].b>=stu[i].c)
                v3.push_back(stu[i]);
        else
            v4.push_back(stu[i]);

     }
}





   sort(v1.begin(),v1.end(),compare);
   sort(v2.begin(),v2.end(),compare);
   sort(v3.begin(),v3.end(),compare);
   sort(v4.begin(),v4.end(),compare);
   printf("%d\n",count);
   for(int i=0;i<v1.size();i++)//size返回容器中实际数据的个数
      {   printf("%d %d %d\n",v1[i].a,v1[i].b,v1[i].c);
      }
       for(int i=0;i<v2.size();i++)
      {
         printf("%d %d %d\n",v2[i].a,v2[i].b,v2[i].c);

      }
       for(int i=0;i<v3.size();i++)
      {
          printf("%d %d %d\n",v3[i].a,v3[i].b,v3[i].c);

      }
       for(int i=0;i<v4.size();i++)
      {
         printf("%d %d %d\n",v4[i].a,v4[i].b,v4[i].c);
      }

}
