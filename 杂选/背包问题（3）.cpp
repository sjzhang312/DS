#include<cstdio>
using namespace std;

const int maxm=201,maxn=31;
int m,n;
int w[maxn],c[maxn];
int f[maxn][maxm];
int main()
{
    scanf("%d %d",&m,&n);
    for(int i=1;i<=n;i++)
           scanf("%d %d",&w[i],&c[i]);
           for(int i=1;i<=n;i++)
                   {

                        for(int v=1;v<=m;v++)
                    {
                        if(v<w[i])
                        f[i][v]=f[i-1][v];
                        else
                        {
                            if(f[i-1][v]>f[i][v-w[i]]+c[i])
                                f[i][v]=f[i-1][v];
                            else
                            f[i][v]=f[i][v-w[i]]+c[i];
                        }

                    }

                   }
       printf("max=%d",f[n][m]);

}

