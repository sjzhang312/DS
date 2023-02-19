#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
struct student{
	string name;
	int height;
};
//身高不同，按身高降序，否则，按名字的字典序升序 
bool compare(student x,student y){
	return x.height!=y.height?x.height>y.height:x.name<y.name;
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	vector<student>stu(n);
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].height;
	}
	sort(stu.begin(),stu.end(),compare);
	int row=k,t=0,m;
	while(row) {
        if(row == k)
            m=n-n/k*(k-1);
        else
            m= n/k;
        vector<string>ans(m);
        ans[m/2]=stu[t].name;
        //左边一列
		int j=m/2-1;
		for(int i=t+1;i<t+m;i+=2)
		ans[j--]=stu[i].name;
		//右边一列
		j=m/2+1;
		for(int i=t+2;i<t+m;i+=2)
		ans[j++]=stu[i].name;
		for(int i=0;i<m;i++){
			if(i!=0)
			cout<<" ";
			cout<<ans[i];
		} 
		cout<<endl;
        t=t+m;//这里t得更新 
        //t访问就是这快排之后由身高从大到小的所有人的下标 
        row--;
    }
	return 0;
}

