#include<stdio.h>
#include<math.h>
int prime(int m);
int main()
{
	int m,n;
	int i;
	int count=0;
	printf("����������������m��n(1<=m,n<=500):");
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(prime(i))
		  count++;
	}
	printf("%d��%d֮����%d��������",m,n,count);
	return 0;
}

int prime(int m)
{
	int i;
	for(i=2;i<=sqrt(m);i++)
	{
	  if(m%i==0)
	    return 0;
	}
	i++;
	if(i>sqrt(m))
	   return 1;
}
