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
		printf("=========================����Ա�ü��׼�����==========================\n");
		printf("=============================��ʤ������==============================\n");
		printf("=====================================================================\n");
		printf("                               ���˵�\n\n");
		printf("                       1.ʮ����ת��Ϊ������\n");
		printf("                       2.������ת��Ϊʮ����\n");
		printf("                       3.ʮ����ת��Ϊʮ������\n");
		printf("                       4.ʮ������ת��Ϊʮ����\n");
		printf("                       5.����ת��Ϊʮ������\n");
        printf("                       6.ʮ������ת��Ϊ������\n");
		printf("��������Ҫ���еĲ�����");
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
			printf("��ѡ�����ʮ����ת��Ϊ������\n");
			printf("������Ҫת����ʮ��������");
			scanf("%d",&number);

			printf("ת�����ڽ���\n");
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
			printf("ʮ������%dת��Ϊ�����ƵĽ��Ϊ��\n",t);
			for(j=i-1;j>=0;j--)
				printf("%c",binary[j]);
			printf("\n");
			break;
		case 2:
			printf("��ѡ����Ƕ�����ת��Ϊʮ����\n");
			printf("������Ҫת���Ķ��������ִ���");
			fflush(stdin);
			gets(binary);
			printf("ת�����ڽ���\n");
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
			printf("��������");
			for(i=0;i<count;i++)
				printf("%c",binary[i]);
			printf("ת��Ϊʮ���ƵĽ��Ϊ%d\n",n);
			break;
		case 3:
			printf("��ѡ�����ʮ����ת��Ϊʮ������\n");
			printf("������Ҫת����ʮ��������");
			scanf("%d",&number);

			printf("ת�����ڽ���\n");
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
			printf("ʮ������%dת��Ϊʮ�����ƵĽ��Ϊ��\n",t);
			for(j=i-1;j>=0;j--)
				printf("%c",hex[j]);
			printf("\n");
			break;
		case 4:
			printf("��ѡ�����ʮ������ת��Ϊʮ����\n");
			printf("������Ҫת����ʮ���������ִ���");
			fflush(stdin);
			gets(hex);
			printf("ת�����ڽ���\n");
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
			printf("ʮ��������");
			for(i=0;i<count;i++)
				printf("%c",hex[i]);
			printf("ת��Ϊʮ���ƵĽ��Ϊ%d\n",n);
			break;
		case 5:
			printf("��ѡ����Ƕ�����ת��Ϊʮ������\n");
			printf("������Ҫת���Ķ��������ִ���");
			fflush(stdin);
			gets(binary);
			printf("ת�����ڽ���\n");
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
			printf("��������");
			for(i=0;i<count;i++)
				printf("%c",binary[i]);
			printf("ת��Ϊʮ�����ƵĽ��Ϊ");
			for(j=t-1;j>=0;j--)
				printf("%c",hex[j]);
			printf("\n");
			break;
		case 6:
			printf("��ѡ�����ʮ������ת��Ϊ������\n");
			printf("������Ҫת����ʮ���������ִ���");
			fflush(stdin);
			gets(hex);
			printf("ת�����ڽ���\n");
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
			printf("ʮ������%dת��Ϊ�����ƵĽ��Ϊ��\n",t);
			for(j=i-1;j>=0;j--)
				printf("%c",binary[j]);
			printf("\n");
			break;

		}
		printf("�Ƿ������Y/N��:");
		fflush(stdin);
		goon=getchar();
		system("cls");
	}while(goon=='Y' || goon=='y');
	return 0;
}
