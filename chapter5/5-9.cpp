#include<stdio.h>
#include<math.h>
int is(int number);
int main()
{
	int m,n;
	int i;
	printf("����������������m��n(1<=m,n<=1000):");
	scanf("%d %d",&m,&n);
	printf("%d��%d֮�����������λ���ֵ������͵��������������:",m,n);
	for(i=m;i<=n;i++)
	{
		if(is(i)==i)
		  printf("%d ",i);
	 } 
	return 0;
}

int is(int number)
{
	int sum=0;
	while(number%10!=number)
	{
		sum+=pow(number%10,3);
		number/=10;
	}
	sum+=pow(number,3);
	return sum;
}
