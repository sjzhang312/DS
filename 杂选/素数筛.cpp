#include<cstdio>
using namespace std;
const int maxn=1000;
int isprime[maxn];
int main(){
    for(int i=2;i*i<maxn;i++){
        if(isprime[i]){
            for(int j=2*i;j<maxn;i+=i)
                isprime[j]=1;
        }
    }
    for(int i=2;i<maxn;i++){
        if(!isprime[i])
            printf("%d",i);
        return 0;
    }
}
