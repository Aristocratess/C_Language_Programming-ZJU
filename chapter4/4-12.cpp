#include<stdio.h>
int main()
{
	float high=100,distance=0;
	int i; 
	for(i=0;i<10;i++)
	{
		distance+=high;
		high=high/2;
	}
	printf("��10�����ʱ���ʱ��������%0.2f�ף���10�η���%d�׸ߡ�",distance,high);
	return 0;
}
