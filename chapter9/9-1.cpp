#include<stdio.h>
typedef struct Salary{
	int id;
	char name[10];
	float BasicSalary;
	float bonus;
	float insurance;
	float RealWages;
}salary;
int main()
{
	salary a[10];
	int i;
	printf("������10��ְ���Ļ�����Ϣ(����Ϊְ����š��������������ʡ�����ͱ���)��\n");
	for(i=0;i<10;i++)
	{
		printf("�������%d��ְ������Ϣ��\n",i+1);
		printf("�������%d��ְ���ı�ţ�\n",i+1);
		scanf("%d",&(a[i].id)); 
		printf("�������%d��ְ����������\n",i+1);	
		scanf("%s",&(a[i].name));  
		printf("�������%d��ְ���Ļ������ʣ�\n",i+1);
		scanf("%f",&(a[i].BasicSalary));
		printf("�������%d��ְ���Ľ���\n",i+1);
		scanf("%f",&(a[i].bonus)); 
		printf("�������%d��ְ���ı��գ�\n",i+1);
		scanf("%f",&(a[i].insurance));
		a[i].RealWages=a[i].BasicSalary+a[i].bonus-a[i].insurance;
	}
	for(i=0;i<10;i++)
	   printf("%s��IDΪ%d����ʵ������Ϊ%0.2f\n",a[i].name,a[i].id,a[i].RealWages);
	return 0;
}
