//(动态规划) O(nm)O(nm)
//f[i][j] 表示从点 (1,1)(1,1) 走到点 (n,m)(n,m) 的方案数。
//如果 i,ji,j 都是偶数，那么特判为 00。
//否则只能从上边或者左边转移过来，即f[i][j] = f[i - 1][j] + f[i][j - 1]
//边界情况：f[i][1]=f[1][j]=1
//
//时间复杂度
//O(nm)O(nm)
//C代码
#include <stdio.h>
#include<iostream> 
using namespace std;
int n, m;
int f[31][31];

int main()
{
    scanf("%d%d", &n, &m);
    
    for (int i = 1; i <= n; i ++ ) f[i][1] = 1; // 边界 f[i][1] 特判为 1
    for (int j = 1; j <= m; j ++ ) f[1][j] = 1; // 边界 f[1][j] 特判为 1
    
    
    for (int i = 2; i <= n; i ++ )              // 枚举 i
        for (int j = 2; j <= m; j ++ )          // 枚举 j
            if (i %=2!=0 || j %2!=0)                 // 如果 i, j 中有一个是奇数
                f[i][j] = f[i - 1][j] + f[i][j - 1]; // 那么进行状态转移
    printf("%d\n", f[n][m]); // 转移后 f[n][m] 即为答案
    
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
	
    return 0;
}
