/*问题描述：在一个字符串中str1中找到所有存在于str2中的字符，并逐一删除。每删除
 一个字符，就按顺序从str3中取出一个字符填充删除的位置。要求在删除字符时，从str1的头部
 开始比较与str2中的元素是否相同，而填充字符时，也从str3的头部逐一选择字符填充。当str3不够长时，循环返回头部
 继续逐一选择。
 输入 
abcdhjkl
hdk
AB
 输出 
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
  
