#include<cstdio>
using namespace std;

int main()
{
    int n,A1=0,A2=0,A3=0,A4=0,A5=0,c1=0,
    c2=0,c3=0,c4=0,c5=0,t=1,count=0;
    double average=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%10==0){
            A1+=a[i];
            c1++;
        }


        else if(a[i]%5==1){
            A2+=t*a[i];
            t*=-1;
            c2++;
        }
        else if(a[i]%5==2){
             A3++;
             c3++;
        }

        else if(a[i]%5==3){
            A4+=a[i];
            count++;
            c4++;
        }
        else if(a[i]%5==4){
                c5++;
            if(a[i]>A5){
                A5=a[i];
            }
        }
    }

    if(c1==0)
        printf("N ");
    else
        printf("%d ",A1);
    if(c2==0)
        printf("N ");
    else
        printf("%d ",A2);
    if(c3==0)
        printf("N ");
    else
        printf("%d ",A3);
    if(c4==0)
        printf("N ");
    else{
        average=A4*1.0/count;
        printf("%.1f ",average);
    }
    if(c5==0)
        printf("N");
    else
        printf("%d",A5);
}
