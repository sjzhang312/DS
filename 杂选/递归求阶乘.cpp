#include<cstdio>
using namespace std;
long long f(int n){
    if(n==1) return 1;
    return n*f(n-1);//��f(n)�ֽ��n*f(n-1)
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld",f(n));
    return 0;
}
