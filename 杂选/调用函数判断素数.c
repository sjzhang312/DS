#include<stdio.h>
#include <math.h>
int main()
{
    int isprime(int);
    void showprime();
    showprime();
    return 0;
}
int isprime(int a)
{
    int k=sqrt(a),j;
    for(j=2;j<=k;j++)
    {
        if(a%j==0)
        break;
    }
    if(j>=k+1)
    return 1;
    else
    return 0;
}
void showprime()
{
    int i,count=0;
    for(i=2;i<=1000;i++)
    {
        if(isprime(i))
        {
            printf("%5d",i);
            count++;
            if(count%10==0)
            printf("\n");
        }

    }
}
