#include<stdio.h>
int main()
{
	int m,n;
	int i,j;
	int sum=0;
	int a[10][6];
	printf("��������������m��n(1<=m,n<=6):");
	scanf("%d %d",&m,&n);
	printf("�����%d��%d�о���a�е�Ԫ�أ�",m,n);
	for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
	   {
	   	 scanf("%d",&a[i][j]);
	   }
	for(j=0;j<n;j++)
	{
	  for(i=0;i<m;i++)
	    sum+=a[i][j];
	  printf("��%d�е�Ԫ��֮��Ϊ%d\n",j+1,sum); 
	}
}
