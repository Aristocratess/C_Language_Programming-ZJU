#include<stdio.h>
int main()
{
	char c[49];
	char ch;
	int i,m,j=0,k=0;
	printf("������һ���ַ�����");
	while((ch=getchar())!='\n')
	{
		c[i]=ch;
		i++;
	}
	c[i]='\0';
	m=i;
	if(m%2==0)
	{
		for(i=0;i<m/2;i++)
		{
			if(c[i]!=c[m-1-i])
			   break;
			j++;
		}
		if(j==m/2)
		  printf("������ַ���Ϊ���ġ�");
		else
		  printf("������ַ������ǻ��ġ�");
	}
	else
	{
		for(i=0;i<m/2;i++)
		{
			if(c[i]!=c[m-1-i])
			  break;
			k++;
		}
		if(k==m/2)
		  printf("������ַ���Ϊ���ġ�");
		else
		  printf("������ַ������ǻ��ġ�");		   
	 }
	return 0; 
 } 
