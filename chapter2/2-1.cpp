#include<stdio.h>
int main()
{
	int num1,num2;
	printf("������num1��num2:");
	scanf("%d %d",&num1,&num2);
	printf("num1��num2�ĺ�Ϊ��%d\n",num1+num2);
	printf("num1��num2�Ĳ�Ϊ��%d\n",num1-num2);	
	printf("num1��num2�Ļ�Ϊ��%d\n",num1*num2);
	if(num2!=0)
	{
	 printf("num1��num2����Ϊ��%f\n",num1*0.1/num2);
     printf("num1��num2������Ϊ��%d\n",num1%num2);	
	}
	else
	 printf("����������Ϊ0������");
	return 0;
}
