#include<stdio.h>
#include<math.h>
//һ���������ˣ������װ� 
int Is_Prime(int n);
int main()
{
	int n,t;
	int a[10];
	int i=2,j=0;
	printf("������һ��������:");
	scanf("%d",&n);
	t=n;
	while(!Is_Prime(n))
	{
		while(n%i==0)
		{
			//if(n%i==0)
			  a[j]=i;
			  j++;
			  n=n/i;
		}
		i++;
		while(!Is_Prime(i))
		 {
		 	 i++;
		  } 
	}
	j++;
	a[j-1]=i;
	printf("%d=",t); 
	for(i=0;i<j-1;i++)
	  printf("%d*",a[i]);
	printf("%d",a[j-1]);
}

int Is_Prime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		  return 0; 
	}
	if(i>sqrt(n))//��ʾÿһ�������Թ��ˣ��������� 
	   return 1;
}
