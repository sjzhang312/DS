/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
int main()
{
    int a[N],i,j,t;
    srand((unsigned)time(NULL));
    printf("数组原始序列：\n");
    for(i=0;i<N;i++)
    {
        a[i]=rand()%100+1;
        printf("%d ",a[i]);
    }
    //开始冒泡排序
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }

        }
    }
     printf("\n排序之后的数列为：\n");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
int main()
{
    int a[N],i,j,t;
    srand((unsigned)time(NULL));
    for(i=0;i<N;i++)
    {
        a[i]=rand()%100+1;
        printf("%d ",a[i]);
    }
//开始冒泡排序
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
        printf("\n排序之后的数列为:\n");
        for(i=0;i<N;i++)
        printf("%d ",a[i]);
        return 0;
}
