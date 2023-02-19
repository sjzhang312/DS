#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)cin>>a[i];
    for(int i=1;i<10;i++){
        if(a[i]>0){
            cout<<a[i];
            a[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++){
        for(int j=1;j<=a[i];j++)cout<<i;
    }
}
