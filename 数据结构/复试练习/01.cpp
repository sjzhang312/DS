/*������������һ���ַ�����str1���ҵ����д�����str2�е��ַ�������һɾ����ÿɾ��
 һ���ַ����Ͱ�˳���str3��ȡ��һ���ַ����ɾ����λ�á�Ҫ����ɾ���ַ�ʱ����str1��ͷ��
 ��ʼ�Ƚ���str2�е�Ԫ���Ƿ���ͬ��������ַ�ʱ��Ҳ��str3��ͷ����һѡ���ַ���䡣��str3������ʱ��ѭ������ͷ��
 ������һѡ��
 ���� 
abcdhjkl
hdk
AB
 ��� 
 abcABjAl
 */
 #include<iostream>
 #include<algorithm>
 #include<cstring>
 using namespace std;
 #define max 200
 int main()
 {
 	char str1[max],str2[max],str3[max];
 	cin>>str1>>str2>>str3;
 	int len1=strlen(str1);
 	int len3=strlen(str3);
 	int cur=0;
 	for(int i=0;i<len1;i++){
 		
 		for(int j=0;j<strlen(str2);j++){
 			if(str2[j]==str1[i]){
 				str1[i]=str3[(cur++)%len3];
			 }
		 }
	 }
	 for(int i=0;i<len1;i++)
	 cout<<str1[i];
	 return 0;
  } 
  
