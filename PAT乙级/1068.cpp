#include<iostream>
#include<vector>
#include<map>
using namespace std;
map<int,int>mapp;//出现次数映射 
int main()
{
	int m,n,tol;
	scanf("%d %d %d",&m,&n,&tol);
	vector<vector<int>>a(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		 scanf("%d",&a[i][j]);
		 mapp[a[i][j]]++;//该key对应的value++ 
		}
	}
	int cnt=0;
	int x,y,color;
	for(int i=1;i<n-1;i++){
		for(int j=1;j<m-1;j++){
			if(a[i][j]-a[i-1][j-1]>tol&&a[i][j]-a[i][j-1]>tol&&a[i][j]-a[i+1][j-1]>tol&&a[i][j]-a[i+1][j]>tol
			&&a[i][j]-a[i+1][j+1]>tol&&a[i][j]-a[i][j+1]>tol&&a[i][j]-a[i-1][j+1]>tol&&a[i][j]-a[i-1][j]>tol){
				if(mapp[a[i][j]]==1){
				cnt++;//满足条件点的个数 
				x=i+1;
				y=j+1;
				color=a[i][j];
				}
			 } 
		}
	}
	if(cnt==1)
	printf("(%d, %d): %d",y,x,color);
	else if(cnt==0)
	printf("Not Exist");
	else
	printf("Not Unique");
	return 0;
 } 
