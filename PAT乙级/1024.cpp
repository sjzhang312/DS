#include<iostream>
using namespace std;
int main(){
    string s;int i=0,e=0,pos;
    cin >> s;
    while(s[i]!='E'){i++;}
    pos=i;//posΪE��λ��
    i+=2;//i++��ָ���������ŵ�λ�� 
    while(i<s.length()){e=e*10+s[i]-'0';i++;}//e�ľ���ֵ
    if(s[0]=='-') printf("-");//��һλ��Ϊ�����������������ʡ�� 
    if(s[pos+1]=='-'){//���ָ��Ϊ���� 
      printf("0.");e--;
      for(i=0;i<e;i++) printf("0"); 
      printf("%c",s[1]);
      for(i=3;i<pos;i++) printf("%c",s[i]);
    }else{ //���ָ��Ϊ���� 
      printf("%c",s[1]);
      if(e>=pos-3){
        for(i=3;i<pos;i++) printf("%c",s[i]);
        for(int i=0;i<e-pos+3;i++) printf("0");
      }else{
        for(i=3;i<3+e;i++) printf("%c",s[i]);
        printf(".");
        for(i=3+e;i<pos;i++) printf("%c",s[i]);
      }
    }
    return 0;
}
