#include<iostream>

#include<cmath>
using namespace std;
int a[10001];
int main()
{
    int m,n,t=0;
    cin>>m>>n;
    for(int i=2;i<=10001;i++){
        int k=sqrt(i);
        int j;
        for(j=2;j<=k;j++){
            if(i%j==0)
                break;
        }
        if(j>k){
           a[t]=i;
           t++;
        }
    }
    int count=1;
    for(int i=m-1;i<n-1;i++){
        if(count%10!=0)
        cout<<a[i]<<' ';

        if(count%10==0){
           cout<<a[i];
           cout<<endl;
        }

        count++;
    }
    cout<<a[n-1];
}




