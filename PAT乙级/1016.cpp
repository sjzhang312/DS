#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{

    string A,B;
    double a,b,Asum=0,Bsum=0,suma=0,sumb=0;
    cin>>A>>a>>B>>b;
    for(int i=0;i<A.length();i++){
        if(A[i]-'0'==a)
            Asum+=1;
    }
     while(Asum>=1){
        suma+=a*(pow(10,Asum)/10);
        Asum-=1;;
    }

    for(int i=0;i<B.length();i++){
        if(B[i]-'0'==b)
            Bsum+=1;
    }
    while(Bsum>=1){
        sumb+=b*(pow(10,Bsum)/10);
        Bsum--;
    }
    long long int t=int(suma+sumb);
     printf("%lld",t);


}
