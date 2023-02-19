#include<cstdio>
using namespace std;
typedef long long int64;
int main()
{
    int64 n,sum=0;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%lld",sum);
    return 0;
}
