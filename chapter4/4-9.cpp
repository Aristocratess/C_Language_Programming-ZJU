#include<stdio.h>
#include<malloc.h>
int main()
{
	int n;
	int *a=(int*)malloc(sizeof(int));
	int i=0,j;
	printf("������һ��������:");
	scanf("%d",&n);
	a[i]=n%10;
	//printf("a[i]=%d",a[i]);
	n=n/10;
	while(n%10!=n)
	{	
	    i++;
		a=(int*)realloc(a,sizeof(int));
		a[i]=n%10;
		n=n/10;
	}
	i++;
	a[i]=n;
	printf("�Ӹ�λ��ʼ��λ�ָ����:");
	for(j=i;j>=0;j--)
	{
		printf("%d ",a[j]);
	 } 
	return 0;
}
