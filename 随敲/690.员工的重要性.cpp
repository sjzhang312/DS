#include<iostream>
#include<algorithm>
#include<cstring>
#include<unordered_map>
#include<queue>
using namespace std;
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
int getImportance(vector<Employee*> employees, int id) {
    unordered_map<int,Employee*>mp;
    for(auto i:employees){
    	mp[i->id]=i;//用员工的ID编号指代emplpyee 
	}
	
	int total=0;
	queue<int>q;
	q.push(id);
	
	while(!q.empty()){
		//获取队首节点
		int curid=q.front();
		q.pop();
		Employee* em =mp[curid];//依据当前编号找到对应的员工
		total+=em->importance;
		for(auto i:em->subordinates)q.push(i);
	}
	
}
int main()
{
	
	getImportance([[1, 5, [2, 3]], [2, 3, []], [3, 3, []]], 1);
 } 
