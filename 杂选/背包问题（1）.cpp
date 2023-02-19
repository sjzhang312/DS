#include<cstdio>
using namespace std;
const int maxm = 201, maxn = 31;
int m, n;
int w[maxn], c[maxn];
int f[maxn][maxm];

int max(int x,int y) { x>y?x:y;}  //求x和y最大值

int main(){

    scanf("%d%d",&m, &n);         //背包容量m和物品数量n
    for (int i = 1; i<= n; i++)  //初始化循环变量，定义一个变量并初始化
      scanf("%d%d",&w[i],&c[i]);  //每个物品的重量和价值
    for (int i=1;i<=n;i++)  //f[i][v]表示前i件物品，总重量不超过v的最优价值
     {
         for (int v = m; v > 0; v--)
            {
                if (w[i] <= v)
                    f[i][v] = max(f[i-1][v],f[i-1][v-w[i]]+c[i]);
                else
                f[i][v] = f[i-1][v];
            }
     }
     printf("%d",f[n][m]);        // f[n][m]为最优解
     return 0;
}
