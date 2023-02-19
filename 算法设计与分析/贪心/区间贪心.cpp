#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1010;
struct inteval{
	int x,y;
}I[maxn];
bool cmp(inteval a,inteval b){
//	if(a.x!=b.x)
	return a.x>b.x;
//	else return a.y<b.y;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>I[i].x>>I[i].y;
	sort(I,I+n,cmp);
	
	int ans=1;
	int lastx=I[0].x;
	for(int i=1;i<n;i++){
		if(I[i].y<=lastx){
			lastx=I[i].x;
			ans++;
		}
	}
	cout<<ans;
	return 0; 
 } 
