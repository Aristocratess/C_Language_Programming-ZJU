#include<stdio.h>
int main()
{
	char c;
	char a[80];
	int i=0,j;
	printf("������һ���Իس����������ַ�����"); 
	while((c=getchar())!='\n')
	{
		a[i]=c;
		i++;
	}
	j=i;
	for(i=j;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
