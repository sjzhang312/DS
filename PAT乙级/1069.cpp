#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	 int m,n,s,cnt=0;
	 scanf("%d %d %d",&m,&n,&s);
	 vector<string>v(m);
	 map<string,int>mapp;
	 for(int i=0;i<m;i++){
	 	cin>>v[i];
	 	cnt++;
		mapp[v[i]]++;	 	
	 }
	 if(cnt<s)
	 printf("Keep going...\n");
	 else{
	 	while(s<=cnt){
	 		if(mapp[v[s-1]]){
	 			printf("%s\n",v[s-1].c_str());
				mapp[v[s-1]]=0;
			}
			else printf("%s\n",v[s].c_str());	
	 		s+=n;
		 }
	 }
}
