#include<stdio.h>
int main()
{
	int n,sign=1;
	int i;
	float fenzi=1,fenmu=1,fenz=1;
	float sum0,sum1=0;
	printf("������������n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum0=fenzi/fenmu;
		sum1+=sum0;
		sign=-sign;
		fenz=fenz+1;
		fenzi=fenz*sign;
		fenmu=fenmu+2;
		//printf("fenzi�ó��Ľ��Ϊ%f\n:",fenzi);
		//printf("fenmu�ó��Ľ��Ϊ%f\n:",fenmu);
	}
	printf("�ó��Ľ��Ϊ%f:",sum1);
	return 0;
}
