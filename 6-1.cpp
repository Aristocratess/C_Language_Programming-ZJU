#include<stdio.h>
int main()
{
	int c1=0,c2=0,c3=0,c4=0;
	char ch;
	printf("������һ���ַ���");
	while((ch=getchar())!='\n')
	{
		if('a'<=ch&&ch<='z'||'A'<=ch&&ch<='Z')
		  c1++;
		else if(ch==' ')
		  c2++;
		else if('0'<=ch&&ch<='9')
		  c3++;
		else 
		  c4++;
	}
	printf("����������ַ���Ӣ����ĸ%d�����ո�%d��������%d���������ַ�%d��",c1,c2,c3,c4);
	return 0;
}
