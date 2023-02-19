#include<stdio.h>
void fanxv(char b[],int n);
int mian()
{
  int i,n;
  printf("请输入字符长度%d",n);
  scanf("%d",&n);
  char a[n];
  printf("请输入一个字符串：");
  for(i=0;i<n;i++)
    scanf("%c",&a[i]);
  fanxv(a,n);
  printf("输出的字符为：");
  for(i=0;i<n;i++)
    printf("%c",a[i]);
  return 0;
}
void fanxv(char b[],int n);
{
    int i,j,t;
    for(i=0;i<n/2;i++)
    {
        j=n-i-1;
        t=b[i];
        b[i]=b[j];
        b[j]=t;
    }
}
