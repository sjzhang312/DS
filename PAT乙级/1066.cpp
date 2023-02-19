#include<cstdio>
const int maxn = 510;
int a[maxn][maxn];
int main()
{
	int M, N, A, B, C;
	scanf("%d%d%d%d%d", &M, &N, &A, &B, &C);
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j > 0)printf(" ");
			scanf("%d", &a[i][j]);
			if (a[i][j] >= A&&a[i][j] <= B)
			{
				a[i][j] = C;
			}
			printf("%03d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
