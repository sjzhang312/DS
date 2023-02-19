#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1000;
int a[maxn];
int b[maxn];
int main()
{
    int n,r,i,j=0,k=0;
    cin>>n>>r;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++){
        j++;
        if(j>r) j=1;
        b[j]+=a[i];

        k+=b[j];
    }
    cout<<k<<endl;
    return 0;

}
