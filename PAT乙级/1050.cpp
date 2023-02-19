#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int cmp(int x,int y){
	return x>y;
}
int main()
{
	int N,m,n,t=0;
	scanf("%d",&N);
	for(n=sqrt((double)N);n>=1;n--){
		if(N%n==0){
		m=N/n;
		break;
	} 
	} //找出m与n的值 （m-n取可能值得最小值） 
	vector<int>v(N);
	for(int i=0;i<N;i++)
	cin>>v[i];
	sort(v.begin(),v.end(),cmp);
	vector<vector<int>>b(m,vector<int>(n));
	int level=m/2+m%2;
	for(int i=0;i<level;i++){
		for(int j=i;j<=n-1-i&&t<=N-1;j++)
		b[i][j]=v[t++];
		for(int j=i+1;j<=m-2-i&&t<=N-1;j++)
		b[j][n-1-i]=v[t++];
		for(int j=n-1-i;j>=i&&t<=N-1;j--)
		b[m-1-i][j]=v[t++];
		for(int j=m-2-i;j>=i+1&&t<=N-1;j--)
		b[j][i]=v[t++];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",b[i][j]);
			if(j!=n-1)printf(" ");
		}
		printf("\n");
	}
	return 0;
}
