#include<cstdio>
using namespace std;
const int maxm = 201, maxn = 31;
int m, n;
int w[maxn], c[maxn];
int f[maxn][maxm];

int max(int x,int y) { x>y?x:y;}  //��x��y���ֵ

int main(){

    scanf("%d%d",&m, &n);         //��������m����Ʒ����n
    for (int i = 1; i<= n; i++)  //��ʼ��ѭ������������һ����������ʼ��
      scanf("%d%d",&w[i],&c[i]);  //ÿ����Ʒ�������ͼ�ֵ
    for (int i=1;i<=n;i++)  //f[i][v]��ʾǰi����Ʒ��������������v�����ż�ֵ
     {
         for (int v = m; v > 0; v--)
            {
                if (w[i] <= v)
                    f[i][v] = max(f[i-1][v],f[i-1][v-w[i]]+c[i]);
                else
                f[i][v] = f[i-1][v];
            }
     }
     printf("%d",f[n][m]);        // f[n][m]Ϊ���Ž�
     return 0;
}
