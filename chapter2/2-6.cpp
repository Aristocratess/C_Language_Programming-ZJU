#include<stdio.h>
#include<math.h>
int main()
{
	//�����������֣�������� 
	double loan,rate;
	double money,value;
	int i;
	printf("����������������ʣ�");
	scanf("%lf %lf",&loan,&rate);
	printf("��������-�»�����:\n");
	for(i=5;i<=30;i++)
	{
		value=pow(1+rate,(i*12));
		//printf("%f",value);
		money=loan*rate*value/(value-1);
		printf("��%d��ÿ���軹��%lfԪ:\n",i,money);
	}
	return 0;
}
