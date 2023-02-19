#include <stdio.h>
#include<iostream>
using namespace std;
int n, m;
int f[31][31];        // 记忆化数组

int dfs(int x, int y) // 搜索点 (x, y)，并返回从点 (x, y) 开始，能到点 (n, m) 的路径数量
{
    if (x & 1 || y & 1)
    {
        if (f[x][y]) return f[x][y];         // 如果该点已经被搜索过，那么不再处理
        // 否则说明没搜索过，需要搜索一遍
        if (x < n) f[x][y] += dfs(x + 1, y);
        if (y < m) f[x][y] += dfs(x, y + 1);
    }
    return f[x][y]; // 最后返回 f[x][y] 即可。如果 x, y 都是偶数，那么 f[x][y] 就没被处理过，必然为 0，可以不特判。
}

int main()
{
    scanf("%d%d", &n, &m);
    f[n][m] = n & 1 || m & 1;  // 这里要特判下 n, m 是否都为偶数
    printf("%d\n", dfs(1, 1));
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}


