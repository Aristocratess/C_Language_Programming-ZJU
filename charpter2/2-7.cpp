#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	int sum=0;
	printf("������һ��������n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=pow(2,i);
	}
	printf("sum=%d",sum);
	return 0;
 } 
