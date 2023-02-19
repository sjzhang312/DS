#include<cstdio> 
int main(){
    int num,i;
    double a[100001],sum=0;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%lf",&a[i]);
        sum+=a[i]*(num-i)*(i+1);
    }
    printf("%.2lf",sum);
    return 0;
}


