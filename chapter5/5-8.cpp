#include<stdio.h>
int factorsum(int number);
int main()
{
	int m,n;
	int i;
	printf("����������������m��n��1<=m,n<=1000):");
	scanf("%d %D",&m,&n);
	printf("%d��%d֮�������Ϊ:",m,n);
	for(i=m;i<=n;i++)
	{
		if(factorsum(i)==i)
		  printf("%d\n",i);
	}
	return 0;
}

int factorsum(int number)
{
	int i;
	int sum=0;//���Ӻ� 
	for(i=1;i<number;i++)
	{
		if(number%i==0)
		  sum+=i;
	}
	return sum;
}
