#include<stdio.h>
#include<stdlib.h> 
int main()
{
	FILE *fp;
	char ch;
	int n1=0,n2=0,n3=0;//n1:��ĸ��n2�����֣�n3�������ַ� 
	if((fp=fopen("F:\\CODE4funny\\c_language_programming\\f12-1.txt","r"))==NULL)
	{
		printf("File open error!\n");
		exit(0);
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		{
			n1++;
		 } 
		else if(ch>='0'&&ch<='9')
		{
			n2++;
		}
		else
		  n3++;
	}
	if(fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(0);
	}
	printf("���ļ�������ĸ%d��������%d���������ַ�%d����\n",n1,n2,n3);
	return 0;
 } 
