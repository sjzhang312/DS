#include <cstdio>
#include<cstring>
using namespace std;
char a[101];
char b[101];
int main()
{
    int sum=0;
    scanf("%s",a);
    int n=strlen(a),j=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]-'0';
    }

    printf("%d",sum);
    while(sum!=0){
        b[j]=sum%10;
        sum/=10;
        j++;
        }
        for(int i=j-1;i>=0;i--){

                switch(b[i]){
                case 0:printf("ling");break;
                case 1:printf("yi");break;
                case 2:printf("er");break;
                case 3:printf("san");break;
                case 4:printf("si");break;
                case 5:printf("wu");break;
                case 6:printf("liu");break;
                case 7:printf("qi");break;
                case 8:printf("ba");break;
                case 9:printf("jiu");break;
                }
                 if(i!=0)
                    printf(" ");
        }
}
