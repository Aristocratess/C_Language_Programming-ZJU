#include<stdio.h>
int main()
{//һЩ���⣬֮ǰ��switch������д��������Ӧ��Ҫ�ڱ߽�ֵ���غϵ�����ɣ�������һЩ�������ЩҲ�����õİɣ� 
// ���������������⣬��salary����Ϊint�ͣ�����˺�Щʱ�� 
	float tax,salary;
	float rate,deduction;
	printf("������������н��");
	scanf("%f",&salary);
		if(salary<=3500)
		{
			rate=0;deduction=0;
		}
			
		else if(3500<salary<=5000)
		{
			rate=0.03;deduction=0;
		}	
		else if(5000<salary<=8000)
		{
			rate=0.1;deduction=105;
		}
		else if(8000<salary<=12500)
		{
			rate=0.2;deduction=555;
		}
		else if(12500<salary<=38500)
		{
			rate=0.25;deduction=1005;
		}
		else if(38500<=salary<58500)
		{
			rate=0.3;deduction=2755;	
		}
		else if(58500<salary<=83500)
		{
			rate=0.35;deduction=5505;
		}
		else
		{
			rate=0.45;deduction=13505;
		}
	tax=rate*(salary-3500)-deduction;
	printf("rate:%0.2f deduction:%0.2f\n",rate,deduction);
    printf("Ӧ����������˰Ϊ%0.2f:",tax);
	return 0;
 } 
