#include<cstdio>
using namespace std;
int main()
{
    int k,n;
    int flag=1;
    while(scanf("%d %d",&k,&n)!=EOF){
            if(n!=0){
                    if(flag){
                            printf("%d %d",k*n,n-1);
                            flag=0;
                    }
                 else
                printf(" %d %d",k*n,n-1);
            }
    }
    if(flag==1)
        printf("0 0");
    return 0;
}
