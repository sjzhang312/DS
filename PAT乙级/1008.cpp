#include<cstdio>
using namespace std;
int main()
{
    int n,m,a[101];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        int t=a[n-1];
        for(int j=n-1;j>=0;j--)
            a[j]=a[j-1];
        a[0]=t;
    }
    int count=1;
    for(int i=0;i<n;i++){
            if(count!=1)
            printf(" ");
        printf("%d",a[i]);
    count++;
    }
}
