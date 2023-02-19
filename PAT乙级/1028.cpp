#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int N,count=0;
	int yyyy,mm,dd;
	string name;
	string maxname,minname;
	cin>>N;
	int maxyyyy=0,minyyyy=9999;
	int maxmm=0,minmm=99;
	int maxdd=0,mindd=99;
	for(int i=0;i<N;i++){
		cin>>name;
		scanf("%d/%d/%d",&yyyy,&mm,&dd);
		if((yyyy<2014||(yyyy==2014&&mm<9)||(yyyy==2014&&mm==9&&dd<=6))&&(yyyy>1814||(yyyy==1814&&mm>9)||(yyyy==1814&&mm==9&&dd>=6))){
			count+=1;
			if(yyyy>maxyyyy||yyyy==maxyyyy&&mm>maxmm||yyyy==maxyyyy&&mm==maxmm&&dd>=maxdd){
				maxyyyy=yyyy;
				maxmm=mm;
				maxdd=dd;
				maxname=name;
			}
			if(yyyy<minyyyy||yyyy==minyyyy&&mm<minmm||yyyy==minyyyy&&mm==minmm&&dd<=mindd){
				minyyyy=yyyy;
				minmm=mm;
				mindd=dd;
				minname=name;
			}
		}
	}
//	printf("%d ",count);
//	if(count!=0)
//	printf("%s %s",minname.c_str(),maxname.c_str());
 cout << count;
    if (count != 0)
        cout << " " << minname << " " << maxname;
    return 0;
	return 0;
	
} 
