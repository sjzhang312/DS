#include<cstdio>
using namespace std;
const int maxm=201,maxn=31;
int m,n;
int w[maxn],c[maxn];
int f[maxm];
int main()
{
    scanf("%d %d",&m,&n);
    for(int i=1;i<=n;i++)
        scanf("%d %d",&w[i],&c[i]);

    for(int i=1;i<=n;i++)
    {
        for(int v=m;v>=w[i];v--)
            if(f[v-w[i]]+c[i]>f[v])
            f[v]=f[v-w[i]]+c[i];
    }
    printf("%d",f[m]);
}
