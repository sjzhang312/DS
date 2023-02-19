#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{

        return a<b;
}
int main()
{
    int a[10]={9,8,7,6,5,4,3,2,1,0},i;
    for(i=0;i<10;i++)
    cout<<a[i]<<endl;
    sort(a,a+10,compare);
    for(i=0;i<10;i++)
        cout<<a[i]<<endl;
    return 0;
}
