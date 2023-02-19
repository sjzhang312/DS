#include<cstdio>
int a[]={0,1,2,3,7,8,33,44,78,99,1234};
int find(int x){
    int l=0,r=10;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        if(a[mid]>x)
            r=mid-1;
        else
            l=mid;
    }
    if(l==0)
        return -1;
    return a[l];

}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",find(x));
}
