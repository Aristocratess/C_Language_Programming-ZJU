#include<stdio.h>
int countdigit(int number,int digit);
int main()
{
	int number,digit;
	printf("������һ��������ͳ�Ʋ����������'2'�ĸ���:");
	scanf("%d",&number);
	printf("%d����%d��2��",number,countdigit(number,2));
	return 0;
}

int countdigit(int number,int digit)
{
	int i=0;
	while(number%10!=number)
	{
		if(number%10==digit)
		  i++;
		number=number/10;
	}
	if(number==digit)
		i++;
	return i;
}
