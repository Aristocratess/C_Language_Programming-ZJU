#include<stdio.h>
int main()
{
	int x,n,result=1;
	int i;
	printf("������ʵ��x��������n:");
	scanf("%d %d",&x,&n);
	for(i=0;i<n;i++)
	{
		result*=x;
	}
	printf("x^nΪ��%d",result);
	return 0;
}
