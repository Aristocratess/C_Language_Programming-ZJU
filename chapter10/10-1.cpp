#include<stdio.h>
#include<math.h>
int Test(int n);
int main()
{
	int n,i;
	printf("������һ��3λ��n���ҳ�101~n����������������������������");
	scanf("%d",&n);
	for(i=101;i<=n;i++)
	 if(Test(i))
	   printf("%d ",i);
	return 0;
}

int Test(int n)
{
	int i;
	int temp;
	int m,t;
	temp=n;
	if(n<100||n>999)
	  printf("������һ��3λ��������\n");
	m=n%10;
	n=n/10;
	t=n%10;
	n=n/10;
	if((((m==t)&&(m!=n))||((m==n)&&(m!=t))||((n==t)&&(n!=m)))&&(sqrt(temp)-(int)sqrt(temp)==0))
	  return 1;
	else
	  return 0;
}
