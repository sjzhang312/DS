#include<iostream>
#include<vector>
using namespace std;
vector<vector<string>> v;

void out(string s){
	for(int i=0;i<7;i++){
		for(int j=0;j<s.size();j++){
			if(j!=s.size()-1)
			cout<<v[s[j]-'A'][i]<<" ";
			else
			cout<<v[s[j]-'A'][i]<<endl;
		}
	}
} 
int main()
{
	for(int i=0;i<26;i++){
		vector<string> tmp_v;
		string tmp;
		for(int j=0;j<7;j++){
			getline(cin,tmp);
			tmp_v.push_back(tmp);//��һ�� 
		}
		v.push_back(tmp_v);//��������ĸ 
	}//�洢26����ĸ
	string in;
	getline(cin,in);//����Ҫ��ӡ�ĵ��� 
	vector<string> v_word;
	string s2="";
	for(int i=0;i<in.size();i++){
		if(in[i]>='A'&&in[i]<='Z')
		s2+=in[i];
		else{
			v_word.push_back(s2);
			s2="";
		}
	}//��Ҫ��ӡ�ĵ��ʴ洢��vector����v_word�� 
	for(int i=0;i<v_word.size();i++){
		if(i==v_word.size()-1)
		out(v_word[i]);
		else{
			out(v_word[i]);
			cout<<endl;
		}	
	}
	 
}
