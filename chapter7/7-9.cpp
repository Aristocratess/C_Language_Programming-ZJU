#include<stdio.h>
//ʮ����ת�κν��ƶ��ǲ���������nȡ�൹������
int main()
{
	int n,m;
	int i=0,j;
	int a[10];
	printf("������һ��ʮ��������");
	scanf("%d",&n);
	printf("������һ���������ƵĻ���(��Χ��2��16֮��)��");
	scanf("%d",&m); 
	while(n/m!=0)
	{
		a[i]=n%m;
		n=n/m;
		i++;
	 } 
	a[i]=n%m;
	printf("ʮ����ת��Ϊ%d���ƺ���Ϊ��",m);
	for(j=i;j>=0;j--)
	 printf("%d",a[j]);
	return 0;
}
