#include<stdio.h>
int main()
{
	int m,n;
	int t,a;
	printf("��������������m��n:");
	scanf("%d %d",&m,&n);
	a=m*n;
	if(m<n)
	{
	  t=m;
	  m=n;
	  n=t;
	}
	while(m%n!=0)
	{
		t=n;
		n=m%n;
		m=t;
	}
	printf("��С��Լ��Ϊ:%d,��С������Ϊ��%d",n,a/n);
	return 0;
}
