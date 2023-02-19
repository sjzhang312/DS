#include<stdio.h>
#include<cstdio>
const int MAXN=1000;
int isprime[MAXN];
int main()
{
    for(int i=2;i*i<MAXN;i++)
        if(!isprime[i])
    {
        for(int j=2*i;j<MAXN;j+=i)
            isprime[j]=1;
    }
    for(int i=2;i<MAXN;i++)
        if(!isprime[i])
        printf("%d\t",i);
    return 0;
}
