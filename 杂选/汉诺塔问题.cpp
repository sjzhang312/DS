#include<cstdio>
int hanoi(int a,int b,int c,int dcount)
{
    int mcount=0;
    if(dcount>1)
    {
        mcount+=hanoi(a,c,b,dcount-1);
        printf("Move:peg%d->peg%d\n",a,c);
        mcount+=hanoi(b,a,c,dcount-1);
    }
    else
        printf("Move:peg%d->peg%d\n",a,c);
    return ++mcount;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=hanoi(1,2,3,n);
    printf("Move count is %d\n",m);
    return 0;
}
