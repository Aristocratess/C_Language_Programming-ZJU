#include<stdio.h>
int main()
{
	int a,n,t;
	int i;
	int sum=0;
	printf("����������������a��n��");
	scanf("%d %d",&a,&n);
	t=a;
	for(i=0;i<n;i++)
	{
		sum+=a;
		a=a*10+t;
	}
	printf("sum=%d",sum);
	return 0;
 } 
