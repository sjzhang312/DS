#include<cstdio>
using namespace std;
int main()
{
    int n,sum=0;
    scanf("%d",&n);
        if(n==1)
            printf("%d",sum);
        else{
        do{
        if(n%2==0)
            n/=2;
        else
           n=(3*n+1)/2;
           sum+=1;
          }while(n!=1);
            printf("%d",sum);
        }
}
