#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,i;
	int *p;
	float sum,aver;
	int max,min;
	printf("������ѧ��������\n");
	scanf("%d",&n);
	p=(int*)malloc(sizeof(int));
	printf("�����1��ѧ���ĳɼ���\n");
	scanf("%d",p);
	sum=*p;
	max=*p;
	min=*p;
	for(i=1;i<n;i++)
	{
		printf("�����%d��ѧ���ĳɼ���\n",i+1);
		p=(int*)realloc(p,sizeof(int));
		scanf("%d",p+i);
		sum+=*(p+i);
		if(*(p+i)>max)
		  max=*(p+i);
		if(*(p+i)<min)
		  min=*(p+i);
	}
   aver=sum/n;
   printf("ѧ����ƽ���ɼ�Ϊ%0.2f����߳ɼ�Ϊ%d����ͳɼ�Ϊ%d.",aver,max,min);
   return 0;
}
