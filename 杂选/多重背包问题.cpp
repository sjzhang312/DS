#include<cstdio>
using namespace std;
int v[6002], w[6002], s[6002];
int f[6002];
int n, m;

int max(int x,int y)  {return x>y?x:y;}
int main(){
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++)
        scanf("%d%d%d",&v[i],&w[i],&s[i]);
    for (int i = 1; i <= n; i++)
       for(int j=m;j>=0;j--)
        for(int k=0;k<=s[i];k++)
        {
            if(j-k*v[i]<0)break;
            f[j]=max(f[j],f[j-k*v[i]]+k*w[i]);
        }
    printf("%d",f[m]);
    return 0;
}
