#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N,row=1,line,count=1,total=1,number=0;
	char c;
	cin>>N>>c;
	
	while(total<N){
		count+=2;
		total+=count*2;
		row+=2;
	}
	if(total>N)
	row-=2;
//	printf("%d\n",row); 
//	printf("%d\n",count*2);
	for(int i=0;i<row/2;i++){
		for(int j=0;j<i;j++)
		printf(" ");
		for(int j=0;j<row-2*i;j++){
			printf("%c",c);
			number+=1;
		}
		
			
		printf("\n");
	}//上方 
	for(int i=0;i<row/2;i++)
	printf(" ");
	printf("%c",c);
	printf("\n"); //中间 
	for(int i=row/2-1;i>=0;i--){
		for(int j=0;j<i;j++)
		printf(" ");
		for(int j=0;j<row-2*i;j++)
			printf("%c",c);
		printf("\n");
	}//下方 
	printf("%d",N-(number*2+1));
	return 0;
}
