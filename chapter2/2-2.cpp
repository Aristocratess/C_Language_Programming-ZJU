#include<stdio.h>
int main()
{
	int consume;
	float ele_price,paymoney;
	printf("�����������µ��õ�����");
	scanf("%d",&consume);
	if(consume<=50)
	{
		paymoney=0.53*consume;
		printf("����֧�����Ϊ%fԪ��",paymoney);
	 } 
	else
	 {
	 	paymoney=(0.53+0.05)*consume;
	 	printf("����֧�����Ϊ%fԪ��",paymoney);
	 }
	return 0;
}
