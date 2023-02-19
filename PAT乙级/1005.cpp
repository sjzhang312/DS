
#include<cstdio>
#include<algorithm>
using namespace std;
bool a[101]={false};
int main()
{
    int n,num[101],number;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        number=num[i];
        if(a[number]==false){
            while(number!=1){
                if(number%2==0)
                    number=number/2;
                else
                    number=(number*3+1)/2;
                if(number<=100)
                a[number]=true;
            }
        }
    }
    sort(num,num+n);
    int count=1;
    for(int i=n-1;i>=0;i--){
        if(a[num[i]]==false){
                if(count!=1)
                printf(" ");
            printf("%d",num[i]);
        count++;

        }

    }



}
