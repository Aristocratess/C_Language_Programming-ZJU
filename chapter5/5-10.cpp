#include<stdio.h>
int reverse(int number);
int main()
{
	int n;
	printf("������һ������:");
	scanf("%d",&n);
	printf("reverse(%d)�ķ���ֵ��%d",n,reverse(n));
	return 0;
}

int reverse(int number)
{
	int reverse_number=number%10;
	number/=10;
	while(number%10!=number)
	{
		reverse_number=reverse_number*10+number%10;
		number/=10;
	}
	reverse_number=reverse_number*10+number;
	return reverse_number;
}
