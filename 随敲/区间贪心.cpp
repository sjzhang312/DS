#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1010;
struct Inteval{
	int x,y;
}I[maxn];
bool cmp(Inteval a,Inteval b){
//	return a.x!=b.x?a.x>b.x:a.y<b.y;//按左端点由大到小排序 
	return a.y<b.y;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>I[i].x>>I[i].y;
	sort(I,I+n,cmp); 
	
	int ans=1,lasty=I[0].y;
	
	for(int i=1;i<n;i++){
		if(I[i].x>=lasty){
			lasty=I[i].y;
			ans++;
		}
	}
	cout<<ans<<endl; 
 } 
