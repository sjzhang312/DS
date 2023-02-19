#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int n,m,optnum,truenum,temp,maxcnt=0;
	int hash[]={1,2,4,8,16},opt[1010][110]={0};
	//hash数组只能这样定义（二进制定义）01 10 100 1000 10000 
	char c;
	scanf("%d %d",&n,&m);
	vector<int>fullscore(m),trueopt(m);
	vector<vector<int>>cnt(m,vector<int>(5));
	for(int i=0;i<m;i++){
		scanf("%d %d %d",&fullscore[i],&optnum,&truenum);
		for(int j=0;j<truenum;j++){
			scanf(" %c",&c);
			trueopt[i]+=hash[c-'a'];
		}
	}
	for(int i=0;i<n;i++){
		double grade=0;
		for(int j=0;j<m;j++){
			scanf(" ");
			scanf("(%d",&temp);
			for(int k=0;k<temp;k++){
				scanf(" %c",&c);
				opt[i][j]+=hash[c-'a'];
			}
			scanf(")");
			//异或条件判断题目是否完全正确（1、完全正确  2、错选和漏选） 
			int el=opt[i][j]^trueopt[j];//异或   相同为0  相异为1 
			if(el){
				if((opt[i][j]|trueopt[j])==trueopt[j])
				grade+=fullscore[j]*1.0/2;
				for(int k=0;k<5;k++)
				if(el&hash[k])
				cnt[j][k]++;//第几道选择题的第几项 
			}
			else
			grade+=fullscore[j];
		}
		printf("%.1f\n",grade);
	}

	for(int i=0;i<m;i++){//题目总数 
		for(int j=0;j<5;j++)//每道题的选项 
		maxcnt=maxcnt>cnt[i][j]?maxcnt:cnt[i][j];
	}
	if(maxcnt==0)
	printf("Too simple\n");
	else{
		for(int i=0;i<m;i++){
			for(int j=0;j<cnt[i].size();j++){
			if(maxcnt==cnt[i][j])
			printf("%d %d-%c\n",maxcnt,i+1,'a'+j); 
			}
		}
 	} 
	return 0;
}
