#include<stdio.h>
//һ�����֣��������������Ĳ�����д��Ҫ��&&������ 
int main()
{
	int n,grade,sum=0;
	int i;
	float aver;
	int A,B,C,D,E;
	A=B=C=D=E=0;
	printf("������ѧ������");
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		printf("�������%d��ѧ���ĳɼ�:",i+1);
		scanf("%d",&grade);
		sum+=grade;
		if(90<=grade&&grade<=100)
		    A++;
		else if(80<=grade&&grade<=89)
		    B++;
		else if(70<=grade&&grade<=79)
		    C++;
		else if(60<=grade&&grade<=69)
		    D++;
		else if(0<=grade&&grade<=59)
		    E++;
		else 
		 printf("����ɼ����󣡣���");
	}
	aver=sum/n;
	printf("ѧ���ǵ�ƽ����Ϊ%0.2f:\n����A����%d��\n������B����%d��\n������C����%d��\n������D����%d��\n������E����%d��",aver,A,B,C,D,E);
	return 0;
}
