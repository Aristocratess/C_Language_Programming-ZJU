#include<stdio.h>
int main()
{
	int n,i;
	int t1,t2;//������¼�����Сֵ���±� 
	int temp;
	int a[10];
	int max,min;
	printf("������һ��������n(1<n<=10):");
	scanf("%d",&n);
	printf("������%d��������",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			t1=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			t2=i;
		}  
	 } 
	temp=a[0];
	a[0]=min;
	a[t2]=temp;
	
	temp=a[n-1];
	a[n-1]=max;
	a[t1]=temp;
	
	printf("����������%d������",n);
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	return 0;
}
