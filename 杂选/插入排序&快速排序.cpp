#include<cstdio>
#include<algorithm>
using namespace std;
int x[100],n;
void insertsort(int x[],int p,int q){
    for(int i=p+1,j,u;i<=q;++i){
        for(j=i-1,u=x[i];j>=p&&u<x[j];--j)
            x[j+1]=x[j];
        x[j+1]=u;

    }
}
void quicksort(int x[],int p,int q){
    if(q-p<43){
        insertsort(x,p,q);
        return;
    }

    int &a=x[p],&b=x[(p+q)>>1],&c=x[q];
    if(a<b^c<b)
        swap(a,b);
    else if(a<c^c<b)swap(a,c);
    int i=p+1,j=q;
    while(i<=j){
        while(i<=q&&x[p]>x[i])
            ++i;
        while(j>p&&x[p]<=x[j])
            --j;
        if(i<=j)
            swap(x[i++],x[j--]);
    }
    swap(x[p],x[j]);
    quicksort(x,p,j-1),quicksort(x,j+1,q);

}
