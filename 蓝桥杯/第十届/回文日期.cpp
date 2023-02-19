#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool check(int date) //判断日期是否合法
{
    int year = date / 10000;
    int month = date % 10000 / 100;
    int day = date % 100;
    if(!day || month < 0 || month > 12 ) return false;
    if(month != 2 && day >months[month]) return false;
    if(month == 2)
    {
        if((year%4==0&&year%100!=0)||(year%400==0)) //闰年特判
        {
            if(day > 29) return false;
        }
        else 
        {
            if(day > 28) return false;
        }
    }
    return true;
}
bool check1(string s){
	
	int len = s.size();
    for(int i = 0, j = len - 1; i < j ; i++,j--)  //双指针
    {
        if(s[i] != s[j]) return false;
    }
    return true;
//	for(int i=0,k=7;i<4;i++,k--){
//	if(s1[i]!=s1[k])
//	return false;
//	}
//	return true;

}
bool check2(string s){
	 if(check1(s))  //首先该日期要满足回文格式
    {
       if(s[0]!=s[2] || s[1]!= s[3] || s[0] == s[1]) return false;
       return true;
    }
    return false;
    
	
}
int main()
{
//	string s;
//	scanf("%s",&s);
	int n;
	scanf("%d",&n);
	int flag=1;
	for(int i=n+1;;i++){
//		string s=to_string(i);
		if(check(i)) {
			string s=to_string(i);
			if(check1(s)&&flag==1){
			cout<<i<<endl;
			flag=0;	
			}
			if(check2(s)){
			cout<<i<<endl;
			return 0;
			}
		}
	
	}
	return 0;
	
	
}
