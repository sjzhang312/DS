#include<stdio.h>
void fanxv(char b[],int n);
int mian()
{
  int i,n;
  printf("�������ַ�����%d",n);
  scanf("%d",&n);
  char a[n];
  printf("������һ���ַ�����");
  for(i=0;i<n;i++)
    scanf("%c",&a[i]);
  fanxv(a,n);
  printf("������ַ�Ϊ��");
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
