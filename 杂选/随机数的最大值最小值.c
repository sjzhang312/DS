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
    printf("\n�����е����ֵΪ:%d",max);
    printf("�����е���СֵΪ:%d",min);
    return 0;
}
