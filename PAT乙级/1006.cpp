#include<cstdio>
using namespace std;
int main()
{
    int n,bai,shi,ge;
    scanf("%d",&n);
    bai=n/100;
    shi=n/10%10;
    ge=n%10;
    for(int i=0;i<bai;i++)
        printf("B");
    for(int i=0;i<shi;i++)
        printf("S");
    for(int i=1;i<=ge;i++)
        printf("%d",i);
}
