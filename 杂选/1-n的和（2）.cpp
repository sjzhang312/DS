#includePath
using namespace std;
typedef long long int64;
int64 f(int64 n){
        if(n==1)
            return 1;
        return n+f(n-1);
    }
int main()
{
    int64 n;
    scanf("%lld",&n);
    printf("%lld",f(n));
    return 0;
}
