#include<stdio.h>
int main()
{
	int miles,wait_time;
	int paymoney;
	printf("��������ʻ��̺͵ȴ�ʱ��:\n");
	scanf("%d %d",&miles,&wait_time);
	if((miles+wait_time/5)<=3)
	  paymoney=10;
	else if(3<(miles+wait_time/5)<=10)
	  paymoney=10+2*(miles+wait_time/5-3);
	else 
	  paymoney=10+2*7+3*(miles+wait_time/5-10);
	printf("��Ӧ��֧������%dԪ��",paymoney);
	return 0;
 } 
