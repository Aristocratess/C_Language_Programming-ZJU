#include<stdio.h>
int main()
{
	int i=0;
	int sign=0;//ָʾ�� 
	char ch;
	printf("������һ���ַ���");
	while((ch=getchar())!='\n')
	{
	    if(sign==0 && ch!=' ')
	      i++;
		if(ch==' ')
		  sign=0;
		else
		  sign=1;	
	}
	printf("�����ַ����е���%d����",i);
	return 0; 
}
