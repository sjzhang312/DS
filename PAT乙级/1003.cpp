#include <cstdio>
#include<cstring>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);
    char a[101];
    for(int i=0;i<n;i++){
         bool result=true;
            int countP=0,sum=0,r=0,b=0,c=0,m,k,t=0;
        scanf("%s",a);

            for(int j=0;j<strlen(a);j++){
        if(a[j]!='P'&&a[j]!='A'&&a[j]!='T'){
           result=false;
            break;
        }
        if(a[j]=='P'){

                countP++;
        if(countP==2){
           result=false;
           break;
        }
        }
          if(a[j]=='T'){
                sum++;
        if(sum==2){
           result=false;
           break;

        }
    }
}
    if(result){
            int countp=0,counta=0,countt=0;
        for(int j=0;j<strlen(a);j++){
            if(a[j]=='P')
                countp=1;
            if(a[j]=='A')
                counta=1;
            if(a[j]=='T')
                countt=1;
        }
        if(countp==1&&counta==1&&countt==1)
        result=true;
    else
        result=false;
    }

    if(result){
            for(int j=0;j<strlen(a);j++){
                 if(a[j]=='P')  m=j;
                 if(a[j]=='T')  k=j;
            }

            for(int j=m;j<k;j++){
                if(a[j]=='A')
                    t++;
            }

        if(m*t==(strlen(a)-1-k))
            result=true;
        else
            result=false;
    }

            if(result)
               printf("YES\n");
                 else
                 printf("NO\n");

    }
}




