#include<cstdio>
const int maxn=10000;
int a[maxn],b[maxn];

using namespace std;
int main()
{
    int n,sum=0,s=0,average;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    average=s/n;
    for(int i=1;i<=n;i++){
        b[i]=a[i]-average;
    }
    for(int i=1;i<=n;i++){
        if(b[i]!=0){
            sum+=1;
            b[i+1]+=b[i];
        }
    }
    printf("%d",sum);
    return 0;
}
