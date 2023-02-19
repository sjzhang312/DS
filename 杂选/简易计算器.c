#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	int select,number,i,j,t,count,n;
	char binary[32],hex[8],goon='Y';
	do
	{
		printf("=====================================================================\n");
		printf("=========================程序员用简易计算器==========================\n");
		printf("=============================张胜杰制作==============================\n");
		printf("=====================================================================\n");
		printf("                               主菜单\n\n");
		printf("                       1.十进制转换为二进制\n");
		printf("                       2.二进制转换为十进制\n");
		printf("                       3.十进制转换为十六进制\n");
		printf("                       4.十六进制转换为十进制\n");
		printf("                       5.二制转换为十六进制\n");
        printf("                       6.十六进制转换为二进制\n");
		printf("请输入你要进行的操作：");
		scanf("%d",&select);
		printf("\n\n\n");
		for(i=0;i<60;i++)
		{
			printf(">");
			Sleep(20);
		}
		system("cls");

		switch(select)
		{
		case 1:
			printf("你选择的是十进制转换为二进制\n");
			printf("请输入要转换的十进制数：");
			scanf("%d",&number);

			printf("转换正在进行\n");
			for(i=0;i<30;i++)
			{
			printf(">");
			Sleep(50);
			}
	    	system("cls");
			i=0;
			t=number;
			do
			{
				j=number%2;
				binary[i]=48+j;
				number/=2;
				i++;
			}while(number!=0);
			printf("十进制数%d转换为二进制的结果为：\n",t);
			for(j=i-1;j>=0;j--)
				printf("%c",binary[j]);
			printf("\n");
			break;
		case 2:
			printf("你选择的是二进制转换为十进制\n");
			printf("请输入要转换的二进制数字串：");
			fflush(stdin);
			gets(binary);
			printf("转换正在进行\n");
			for(i=0;i<30;i++)
			{
			printf(">");
			Sleep(50);
			}
	    	system("cls");
			count=strlen(binary);
			n=0;
			for(i=0;i<count;i++)
			{
				j=binary[i]-48;
				n=n*2+j;
			}
			printf("二进制数");
			for(i=0;i<count;i++)
				printf("%c",binary[i]);
			printf("转换为十进制的结果为%d\n",n);
			break;
		case 3:
			printf("你选择的是十进制转换为十六进制\n");
			printf("请输入要转换的十进制数：");
			scanf("%d",&number);

			printf("转换正在进行\n");
			for(i=0;i<30;i++)
			{
			printf(">");
			Sleep(50);
			}
	    	system("cls");
			i=0;
			t=number;
			do
			{
				j=number%16;
				if(j>=0 && j<=9)
					hex[i]=48+j;
				if(j>=10 && j<=15)
					hex[i]=55+j;
				number/=16;
				i++;
			}while(number!=0);
			printf("十进制数%d转换为十六进制的结果为：\n",t);
			for(j=i-1;j>=0;j--)
				printf("%c",hex[j]);
			printf("\n");
			break;
		case 4:
			printf("你选择的是十六进制转换为十进制\n");
			printf("请输入要转换的十六进制数字串：");
			fflush(stdin);
			gets(hex);
			printf("转换正在进行\n");
			for(i=0;i<30;i++)
			{
			printf(">");
			Sleep(50);
			}
	    	system("cls");
			count=strlen(hex);
			n=0;
			for(i=0;i<count;i++)
			{
				if(hex[i]>='A'&& hex[i]<='Z')
					j=hex[i]-55;
				if(hex[i]>='a' && hex[i]<='z')
					j=hex[i]-87;
				if(hex[i]>='0' && hex[i]<='9')
					j=hex[i]-48;
				n=n*16+j;
			}
			printf("十六进制数");
			for(i=0;i<count;i++)
				printf("%c",hex[i]);
			printf("转换为十进制的结果为%d\n",n);
			break;
		case 5:
			printf("你选择的是二进制转换为十六进制\n");
			printf("请输入要转换的二进制数字串：");
			fflush(stdin);
			gets(binary);
			printf("转换正在进行\n");
			for(i=0;i<30;i++)
			{
			printf(">");
			Sleep(50);
			}
	    	system("cls");
			count=strlen(binary);
			n=0;
			for(i=0;i<count;i++)
			{
				j=binary[i]-48;
				n=n*2+j;
			}
			i=0;
			do
			{
				j=n%16;
				if(j>=0 && j<=9)
					hex[i]=48+j;
				if(j>=10 && j<=15)
					hex[i]=55+j;
				n/=16;
				i++;
			}while(n!=0);
			t=i;
			printf("二进制数");
			for(i=0;i<count;i++)
				printf("%c",binary[i]);
			printf("转换为十六进制的结果为");
			for(j=t-1;j>=0;j--)
				printf("%c",hex[j]);
			printf("\n");
			break;
		case 6:
			printf("你选择的是十六进制转换为二进制\n");
			printf("请输入要转换的十六进制数字串：");
			fflush(stdin);
			gets(hex);
			printf("转换正在进行\n");
			for(i=0;i<30;i++)
			{
			printf(">");
			Sleep(50);
			}
	    	system("cls");
			count=strlen(hex);
			n=0;
			for(i=0;i<count;i++)
			{
				if(hex[i]>='A'&& hex[i]<='Z')
					j=hex[i]-55;
				if(hex[i]>='a' && hex[i]<='z')
					j=hex[i]-87;
				if(hex[i]>='0' && hex[i]<='9')
					j=hex[i]-48;
				n=n*16+j;
			}
			i=0;
			do
			{
				j=n%2;
				binary[i]=48+j;
				n/=2;
				i++;
			}while(n!=0);
			printf("十进制数%d转换为二进制的结果为：\n",t);
			for(j=i-1;j>=0;j--)
				printf("%c",binary[j]);
			printf("\n");
			break;

		}
		printf("是否继续（Y/N）:");
		fflush(stdin);
		goon=getchar();
		system("cls");
	}while(goon=='Y' || goon=='y');
	return 0;
}
