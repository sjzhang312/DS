#include<cstdio>
using namespace std;
const int maxm=2001,maxn=31;
int m,n,v,i;
int w[maxn],c[maxn];
int f[maxm];
int main()
{
    scanf("%d %d",&m,&n);//��ʾ������������Ʒ����n;
    for(i=1;i<=n;i++)
    scanf("%d %d",&w[i],&c[i]);
   for(int i=1;i<=n;i++)
   {
       for(v=w[i];v<=m;v++)
        if(f[v-w[i]]+c[i]>f[v])
        f[v]=f[v-w[i]]+c[i];
   }
    printf("max=%d",f[m]);//f[m]Ϊ���Ž�
    return 0;
}
