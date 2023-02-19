#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int count=1;
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    //第1对相同的大写英文字母
    for(int i=0;i<a.length()&&i<b.length();i++){
      if(a[i]==b[i]){
            if(a[i]>='A'&&a[i]<='G'){
            if(a[i]=='A')
            printf("MON ");
           else if(a[i]=='B')
            printf("TUE ");
           else if(a[i]=='C')
            printf("WED ");
           else if(a[i]=='D')
            printf("THU ");
           else if(a[i]=='E')
            printf("FRI ");
           else if(a[i]=='F')
            printf("SAT ");
           else if(a[i]=='G')
            printf("SUN ");
                break;
            }

    }
    count++;
}
            //第2对相同的字符
            for(int i=count;i<a.length()&&i<b.length();i++){
                if(a[i]==b[i]){
            if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'
               ||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||(a[i]>='A'&&a[i]<='N')){
                    if(a[i]=='0')
                    printf("00:");
                else if(a[i]=='1')
                    printf("01:");
                else if(a[i]=='2')
                    printf("02:");
                else if(a[i]=='3')
                    printf("03:");
                else if(a[i]=='4')
                    printf("04:");
                else if(a[i]=='5')
                    printf("05:");
                else if(a[i]=='6')
                    printf("06:");
                else if(a[i]=='7')
                    printf("07:");
                else if(a[i]=='8')
                    printf("08:");
                else if(a[i]=='9')
                    printf("09:");
                else if(a[i]=='A')
                    printf("10:");
                else if(a[i]=='B')
                    printf("11:");
                else if(a[i]=='C')
                    printf("12:");
                else if(a[i]=='D')
                    printf("13:");
                else if(a[i]=='E')
                    printf("14:");
                else if(a[i]=='F')
                    printf("15:");
                else if(a[i]=='G')
                    printf("16:");
                else if(a[i]=='H')
                    printf("17:");
                else if(a[i]=='I')
                    printf("18:");
                else if(a[i]=='J')
                    printf("19:");
                else if(a[i]=='K')
                    printf("20:");
                else if(a[i]=='L')
                    printf("21:");
                else if(a[i]=='M')
                    printf("22:");
                else if(a[i]=='N'){
                    printf("23:");
                }

                    break;
               }


            }
    }




    for(int i=0;i<c.length()&&i<d.length();i++){
        if(c[i]==d[i]){
            if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')){
                printf("%02d",i);
            }
        }

    }

}

