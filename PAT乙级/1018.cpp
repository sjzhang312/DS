#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int N,jiaping=0,jiasheng=0,jiafu=0,yisheng=0,yifu=0,yiping=0;
    int a[5]={0},b[5]={0};//a[0]=�״��ӣ�a[1]=�ײ���a[2]=�׼���
    char jia,yi;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
       cin>>jia>>yi;
        if(jia=='C'){
            if(yi=='C'){
                jiaping+=1;
                yiping+=1;
            }
            else if(yi=='J'){
                jiasheng+=1;
                a[0]+=1;//�״��ӻ�ʤ����
                yifu+=1;
            }
            else{
                jiafu+=1;
                b[1]+=1;//�Ҳ���ʤ����
                yisheng+=1;
            }
        }
        else if(jia=='J'){
            if(yi=='J'){
                 jiaping+=1;
                 yiping+=1;
            }
            else if(yi=='B'){
                jiasheng+=1;
                a[2]+=1;//�׼�����ʤ����
                yifu+=1;
            }
            else{
                 jiafu+=1;
                yisheng+=1;
                b[0]+=1;//�Ҵ��ӻ�ʤ����
            }
        }
        else if(jia=='B'){
            if(yi=='B'){
                jiaping+=1;
                 yiping+=1;
            }
            else if(yi=='C'){
                jiasheng+=1;
                a[1]+=1;//�ײ���ʤ����
                yifu+=1;
            }
            else{
                jiafu+=1;
                yisheng+=1;
                b[2]+=1;//�Ҽ�����ʤ����
            }
        }
    }
    //printf("%d %d %d %d %d %d\n",a[0],a[1],a[3],b[0],b[1],b[3]);
     int amax=0,bmax=0;
    for(int i=0;i<3;i++){

        if(a[i]>amax){
           amax=a[i];
        }
    }//
     for(int i=0;i<3;i++){

        if(b[i]>bmax){
            bmax=b[i];
        }
    }//


    printf("%d %d %d\n",jiasheng,jiaping,jiafu);
    printf("%d %d %d\n",yisheng,yiping,yifu);
//    printf("%d\n",amax);
//    printf("%d\n",bmax);
    //printf("%d %d %d %d %d %d\n",a[0],a[1],a[3],b[0],b[1],b[3]);
    if(amax==a[0]){
    	if(amax==a[1]){
    		printf("B ");
		}
//		else if(amax==a[2])
//		printf("C ");
		else
		printf("C ");
	}
    else if(amax==a[1]){
    	printf("B ");	
	}
    else if(amax==a[2])
        printf("J ");
        //
        
        
       if(bmax==b[0]){
    	if(bmax==b[1]){
    		printf("B");
		}
//		else if(bmax==b[2])
//		printf("C ");
		else
		printf("C");
	}
    else if(bmax==b[1]){
    	printf("B");	
	}
    else if(bmax==b[2])
        printf("J");

}
