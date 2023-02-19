#include <stdio.h>
#include<iostream>
using namespace std;
int n, m;
int f[31][31];        // ���仯����

int dfs(int x, int y) // ������ (x, y)�������شӵ� (x, y) ��ʼ���ܵ��� (n, m) ��·������
{
    if (x & 1 || y & 1)
    {
        if (f[x][y]) return f[x][y];         // ����õ��Ѿ�������������ô���ٴ���
        // ����˵��û����������Ҫ����һ��
        if (x < n) f[x][y] += dfs(x + 1, y);
        if (y < m) f[x][y] += dfs(x, y + 1);
    }
    return f[x][y]; // ��󷵻� f[x][y] ���ɡ���� x, y ����ż������ô f[x][y] ��û�����������ȻΪ 0�����Բ����С�
}

int main()
{
    scanf("%d%d", &n, &m);
    f[n][m] = n & 1 || m & 1;  // ����Ҫ������ n, m �Ƿ�Ϊż��
    printf("%d\n", dfs(1, 1));
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}


