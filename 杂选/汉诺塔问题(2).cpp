#include<cstdio>
typedef long long int64;
int64 mcount;
void hanoi(char a,char b,char c,int n)
{
    if(n==1)
    {
        printf("Move %lld :%c->%c\n",++mcount,a,c);
        return;
    }
    hanoi(a,c,b,n-1);//把n-1个盘子从a盘借助b盘移动到c盘
    printf("Move %lld :%c->%c\n",++mcount,a,c);//把最后一个盘子从a盘移动到c盘
    hanoi(b,a,c,n-1);//把n-1个盘子从b盘借助a盘移动到c盘
}
int main()
{
    int n;
    scanf("%d",&n);
    hanoi('a','b','c',n);
    printf("Move count is %lld\n",mcount);
    return 0;
}
