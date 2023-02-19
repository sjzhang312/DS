#include<cstdio>
#include<cstring>
using namespace std;
char a[250];
int main()
{
    int s,len,k,flag=0;
    scanf("%s %d",a,&s);
    len=strlen(a);
    for(int i=1;i<=s;i++){
        for(int j=0;j<len-1;j++){
            if(a[j]>a[j+1]){
                for(k=j;k<len-1;k++)
                    a[k]=a[k+1];
                break;
            }
        }
        len--;
    }
    for(int i=0;i<=len-1;i++){
        if(a[i]!='0'||i==len-1)
            flag=1;
        if(flag)
            printf("%c",a[i]);
    }
}
