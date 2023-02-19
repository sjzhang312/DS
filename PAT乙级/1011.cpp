#include<cstdio>
using namespace std;
int main()
{
    int n;
    long int a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a+b>c)
            printf("Case #%ld: true\n",i+1);
        else
            printf("Case #%ld: false\n",i+1);
    }
}

