/*#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int a[N],i,j,t,k;
    srand((unsigned)time(NULL));
    printf("数组原始序列：\n");
    for(i=0;i<N;i++)
    {
        a[i]=rand()%100+1;
        printf("%d ",a[i]);
    }
    //开始选择排序
    for(i=0;i<N-1;i++)
    {
        k=i;
        for(j=i+1;j<N;j++)
        {
            if(a[j]<a[k])
            k=j;
        }
       if(k!=i)
        {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
    }
    printf("\n排序之后的数列为：\n");
    for(i=0;i<N;i++)
    printf("%d ",a[i]);
    return 0;
}*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int a[N],i,j,t,k;
    srand((unsigned)time(NULL));
    printf("数组原始序列：\n");
    for(i=0;i<N;i++)
    {
        a[i]=rand()%100+1;
        printf("%d ",a[i]);
    }
    //开始选择排序
    for(i=0;i<N;i++)
    {
        k=i;
        for(j=i+1;j<N;j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        if(k!=i)
        {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
    }
    printf("\n排序之后的数列为：\n");
    for(i=0;i<N;i++)
    printf("%d ",a[i]);
    return 0;
}
