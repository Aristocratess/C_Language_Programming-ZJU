#include<stdio.h>
int main()
{
	char c;
	int i;
	int n1=0,n2=0,n3=0,n4=0,n5=0;
	printf("������һ�����֣�");
	while((c=getchar())!='\n')
	{
		if(c>='A'&&c<='Z')
		  n1++;
		else if(c>='a'&&c<='z')
		  n2++;
		else if(c==' ')
		  n3++;
		else if(c>='0'&&c<='9')
		  n4++;
		else
		  n5++; 
	}
	printf("�����������д�д��ĸ%d����Сд��ĸ%d�����ո�%d��������%d���������ַ�%d����",n1,n2,n3,n4,n5);
	return 0;
}
