#include<stdio.h>
int main()
{
	char c;
	char a[80];
	int i=0,j;
	int n=0;
	printf("������һ���Իس����������ַ�����"); 
	while((c=getchar())!='\n')
	{
		a[i]=c;
		i++;
	}
	for(j=0;j<=i;j++)
	{
	  if(a[j]>'A'&&a[j]<='Z'&&a[j]!='E'&&a[j]!='T'&&a[j]!='O'&&a[j]!='U')
	  {
	  	printf("%c������Ĵ�д������ĸ.\n",a[j]);
	    n++;
	  }
	}
	printf("������ַ������д�д������ĸ%d����",n);
	return 0;
}
