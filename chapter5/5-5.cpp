#include<stdio.h>
int fn(int a,int n);
int main()
{
	int a,n;
	int sum=0,i;
	printf("����������������a��n:");
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	  sum+=fn(a,i);
	printf("a+aa+aaa+aa...a(n��a)֮��Ϊ%d",sum);
	return 0;
	
}

int fn(int a,int n)
{
	int i;
	int sum=a;
	for(i=1;i<n;i++)
	{
		sum=sum*10+a; 
	}
	return sum;
}
