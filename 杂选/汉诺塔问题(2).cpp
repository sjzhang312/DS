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
    hanoi(a,c,b,n-1);//��n-1�����Ӵ�a�̽���b���ƶ���c��
    printf("Move %lld :%c->%c\n",++mcount,a,c);//�����һ�����Ӵ�a���ƶ���c��
    hanoi(b,a,c,n-1);//��n-1�����Ӵ�b�̽���a���ƶ���c��
}
int main()
{
    int n;
    scanf("%d",&n);
    hanoi('a','b','c',n);
    printf("Move count is %lld\n",mcount);
    return 0;
}
