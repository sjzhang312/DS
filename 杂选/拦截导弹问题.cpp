#include<cstdio>
using namespace std;
const int maxn=30000;
int l[maxn];//���ص�����͸߶�
int a[maxn];//���������ĸ߶�
int main()
{
    int n=8;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p,k=1;
    l[k]=a[1];
    for(int i=2;i<=n;i++){
        p=0;
        for(int j=1;j<=k;j++){
            if(l[j]>=a[i]){
                if(p==0)  p=j;
                else if(l[p]>l[j]) p=j;
            }
        }
        if(p==0){
            k++;//�������a[i]>l[j]����Ӧ������һ����ϵͳ
            l[k]=a[i];
        }
        else
            l[p]=a[i];
    }
    printf("%d",k);
}
