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
			tmp_v.push_back(tmp);//存一行 
		}
		v.push_back(tmp_v);//存整个字母 
	}//存储26个字母
	string in;
	getline(cin,in);//输入要打印的单词 
	vector<string> v_word;
	string s2="";
	for(int i=0;i<in.size();i++){
		if(in[i]>='A'&&in[i]<='Z')
		s2+=in[i];
		else{
			v_word.push_back(s2);
			s2="";
		}
	}//把要打印的单词存储到vector数组v_word中 
	for(int i=0;i<v_word.size();i++){
		if(i==v_word.size()-1)
		out(v_word[i]);
		else{
			out(v_word[i]);
			cout<<endl;
		}	
	}
	 
}
