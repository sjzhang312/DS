#include<iostream>
#include<algorithm>
using namespace std;
int a[1000000];
bool cmp(int a,int b){
	return a>b;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" "; 
	int ans=0,p=1;//p表示骑车的天数 
	while(ans<=n&&a[p]>p){
		ans++;
		p++;
	}
	printf("%d",ans);
//	题目输入数据中给出一个数字n表示骑行的天数，并且给出了每天对应的骑行距离。想要找出有E天超过E英里，
//	很容易想到先对这些天的骑行距离进行排序，从最大的骑行距离开始扫，2 3 6 6 7 7 8 8 9 10? 一个一个来 10的时候,
//	第一天，(1天超过1 英里) ；9的时候，(2天超过2英里)；8的时候(3天超过3英里)；8的时候(4天超过4英里)；7的时候(5天超过5英里)；
//	7的时候(6天超过6英里)；	6的时候(7天超过7英里)这里得出了矛盾，即第7天的时候，骑行的英里数没有超过7(<=7)扫到这里的时候跳出循环，输出上一个天数。
}

