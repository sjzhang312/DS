#include<cstdio>
int a[]={0,1,2,5,7,8,33,44,78,111,1234};
int Find(int x)
{
    int l=1,r=11;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(a[mid]>=x)
            r=mid;
        else
            l=mid+1;
    }
    if(l==11)
        return -1;
    return a[l];
}
int main()
{
    int x=111;
    printf("%d\n",Find(x));
    return 0;
}
