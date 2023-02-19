#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[10],i,min,max;
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        a[i]=rand()%100+1;
        printf("%d ",a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<10;i++)
    {
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    printf("\n数组中的最大值为:%d",max);
    printf("数组中的最小值为:%d",min);
    return 0;
}
