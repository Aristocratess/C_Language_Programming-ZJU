#include<stdio.h>
int main()
{
	int i,m,n;
	double sum0,sum1=0;
	printf("������������m��n:");
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		sum0=i*i+1*0.1/i;
		sum1+=sum0;
	 } 
	printf("�ó��Ľ��Ϊ:%f",sum1);
	return 0;
}
