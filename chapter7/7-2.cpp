#include<stdio.h>
int main()
{
	int n,i,j,temp;
	int max;
	int a[10];
	printf("������һ��������n(1<n<=10):");
	scanf("%d",&n);
	printf("������%d��������",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)//ð������ 
	 for(j=0;j<n-1-i;j++)
      {
      	if(a[j]>a[j+1])
      	{
      	  temp=a[j];
      	  a[j]=a[j+1];
      	  a[j+1]=temp;
		  }
	  }
	printf("�Ӵ�С����������");
	for(i=n-1;i>=0;i--)
	  printf("%d ",a[i]);
	return 0;
}
