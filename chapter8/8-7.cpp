#include<stdio.h>
#include<string.h>
//����һ����ŵ������ĳ��� 
int main()
{
    char a[5][49];
    int i,j;
    char *temp;
    printf("����������5���ַ�����\n");
    for(i=0;i<5;i++)
    {
    	printf("�������%d���ַ�����\n",i+1);
    	scanf("%s",a+i);
	}
	printf("����ǰ��");
	for(i=0;i<5;i++)
	  printf("��%d���ַ���Ϊ%s\n",i+1,*(a+i));
	for(j=0;j<5;j++)
	  for(i=0;i<5-j;i++)
	    if(strcmp(*(a+i),*(a+i+1))>0)
	    {
	    	strcpy(temp,*(a+i));
            strcpy(*(a+i),*(a+i+1));
            strcpy(*(a+i+1),temp);
		}
	printf("�����");
	for(i=1;i<6;i++)
	  printf("��%d���ַ���Ϊ%s\n",i,*(a+i));
	return 0;
}
