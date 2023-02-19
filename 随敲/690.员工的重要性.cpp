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
    	mp[i->id]=i;//��Ա����ID���ָ��emplpyee 
	}
	
	int total=0;
	queue<int>q;
	q.push(id);
	
	while(!q.empty()){
		//��ȡ���׽ڵ�
		int curid=q.front();
		q.pop();
		Employee* em =mp[curid];//���ݵ�ǰ����ҵ���Ӧ��Ա��
		total+=em->importance;
		for(auto i:em->subordinates)q.push(i);
	}
	
}
int main()
{
	
	getImportance([[1, 5, [2, 3]], [2, 3, []], [3, 3, []]], 1);
 } 
