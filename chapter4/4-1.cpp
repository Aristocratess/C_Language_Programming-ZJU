#include<stdio.h>
int main()
{
	int number,even_sum=0;
	printf("������һ����������");
	scanf("%d",&number);
	while(number!=0)
	{
		if(number<0)
		   break;
		if(number%2==0)
		   even_sum+=number;
		scanf("%d",&number);
	}
	printf("���е�ż����Ϊ%d",even_sum);
	return 0;
 } 
