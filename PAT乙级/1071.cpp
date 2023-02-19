#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int T,K;
	cin>>T>>K;
	int n1,b,t,n2;
	for(int i=0;i<K;i++){
		cin>>n1>>b>>t>>n2;//b 为 0 表示玩家赌小，为 1 表示玩家赌大
		if(t>T)
		printf("Not enough tokens.  Total = %d.\n",T);
		else{
					if(b==0){//玩家赌小 
			if(n1>n2){
				printf("Win %d!  Total = %d.\n",t,T+t);
				T+=t;
			}
			else{
				printf("Lose %d.  Total = %d.\n",t,T-t);
				T-=t;
			}
		} 
		if(b==1){
			if(n1>n2){
				printf("Lose %d.  Total = %d.\n",t,T-t);
				T-=t; 
			}
			
			else{
				printf("Win %d!  Total = %d.\n",t,T+t);
				T+=t;
			}
		
		}
			if(T<=0){
			printf("Game Over.\n");
			break;
			}
		
		} 

	}
	
 } 
