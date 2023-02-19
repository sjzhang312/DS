//(��̬�滮) O(nm)O(nm)
//f[i][j] ��ʾ�ӵ� (1,1)(1,1) �ߵ��� (n,m)(n,m) �ķ�������
//��� i,ji,j ����ż������ô����Ϊ 00��
//����ֻ�ܴ��ϱ߻������ת�ƹ�������f[i][j] = f[i - 1][j] + f[i][j - 1]
//�߽������f[i][1]=f[1][j]=1
//
//ʱ�临�Ӷ�
//O(nm)O(nm)
//C����
#include <stdio.h>
#include<iostream> 
using namespace std;
int n, m;
int f[31][31];

int main()
{
    scanf("%d%d", &n, &m);
    
    for (int i = 1; i <= n; i ++ ) f[i][1] = 1; // �߽� f[i][1] ����Ϊ 1
    for (int j = 1; j <= m; j ++ ) f[1][j] = 1; // �߽� f[1][j] ����Ϊ 1
    
    
    for (int i = 2; i <= n; i ++ )              // ö�� i
        for (int j = 2; j <= m; j ++ )          // ö�� j
            if (i %=2!=0 || j %2!=0)                 // ��� i, j ����һ��������
                f[i][j] = f[i - 1][j] + f[i][j - 1]; // ��ô����״̬ת��
    printf("%d\n", f[n][m]); // ת�ƺ� f[n][m] ��Ϊ��
    
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
	
    return 0;
}
