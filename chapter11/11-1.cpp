#include<stdio.h>
int main()
{
	char *c[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int i;
	printf("�������Ӧ���·ݣ�");
	scanf("%d",&i);
	printf("�·�%d�Ķ�ӦӢ������Ϊ%s",i,c[i-1]);
	return 0;
}
