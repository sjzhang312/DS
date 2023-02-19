#include<iostream>
using namespace std;
int f[20]={0};
int Fib(int n){
    if(f[n]!=0) return f[n];
    return f[n]=Fib(n-1)+Fib(n-2);
}
int main(){
    int n;
    cin>>n;
    f[1]=f[2]=1;
    cout<<Fib(n);
    return 0;
}
