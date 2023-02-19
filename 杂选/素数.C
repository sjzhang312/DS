#include<stdio.h>
#include<math.h>
int main()
/*{
   int i,n;
   scanf("%d",&n);
   for(i=2;i<=n-1;i++)
   {
    if(n%i==0)
        break;
   }
   if(i==n)
    printf("%d是素数\n",n);
   else
    printf("%d不是素数\n",n);
   return 0;
}*/
{
    int i,k,n;
    scanf("%d",&n);
    k=sqrt(n);
    for(i=2;i<=k;i++)
    {
        if(n%i==0)
            break;
    }
    if(i>k)
        printf("%d是素数",n);
    else
        printf("%d不是素数",n);
    return 0;
}

