#include<cstdio>
#include<cmath>
using namespace std;

const int maxn=10001;
int a[maxn];
int main()
{
    int n,m=0,j,sum=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){

        int k=sqrt(i);
        for(j=2;j<=k;j++){
            if(i%j==0)
                break;

        }
        if(j>k){
            a[m]=i;
            m++;
        }
    }
   for(int i=0;i<m;i++){
     if(a[i+1]-a[i]==2)
        sum++;
   }
   printf("%d",sum);
}
