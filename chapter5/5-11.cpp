#include<stdio.h>
int input_stu(int number,int a[][5])
{
	int i,j;
	for(i=0;i<number;i++)
	{
	   printf("�������%d��ѧ���ĳɼ���\n",i+1);
	   for(j=0;j<5;j++)
	   {
	   	  printf("�������%d��ѧ����%d�ſεĳɼ���",i+1,j+1);
	   	  scanf("%d",&a[i][j]);
	   }
	}
	return 0;
}

float avr_stu(int a[][5],int number)
{
	int i,j,sum=0;
	float aver;
	for(j=0;j<number;j++)
	{
	  for(i=0;i<5;i++)
	    sum+=a[j][i];
	  aver=sum/5;
	  printf("��%d��ѧ��5�ſγ̵�ƽ����Ϊ%0.2f\n",j+1,aver);
	}
    return 0;
}

float avr_cor(int a[][5],int number)
{
	int i,j;
	int sum;
	float aver;
	for(j=0;j<5;j++)
	{
	  for(i=0;i<number;i++)
	  	sum+=a[i][j];
	  aver=sum/5;
	  printf("��%d�ſγ̵�ƽ����Ϊ%0.2f��\n",j+1,aver);
	}
	return 0;
}

int calc_data(int n,int a[][5],int number)
{
	int i;
	if(n==0)
    {
     avr_stu(a,number);
	}
	if(n==1)
	{
     avr_cor(a,number);	
    }	  
	return 0;
}

int highsest(int a[][5],int number,int j)
{//������߷� 
	int i;
	int max=a[0][j-1];
	for(i=0;i<number;i++)
	{
		if(a[i][j-1]>max)
		  max=a[i][j-1];
	}
	return max; 
}

int output_stu(int a[][5],int i)
{
	int j;
	for(j=0;j<5;j++)
	  printf("%d ",a[i-1][j]);
	return 0;
}

int main()
{
	int number;
	int a[100][5];
	int i,j;
	int n;
	printf("������ѧ����������");
	scanf("%d",&number);
	if(number>100)
	  printf("ERROR!!!\n");
	input_stu(number,a);
	printf("����0�����ѧ����ƽ���ɼ������1������γ̵�ƽ���ɼ���");
	scanf("%d",&n);
	calc_data(n,a,number);
	printf("���ҵڼ��ſγ̵���߷֣�\n");
	scanf("%d",&j);
	printf("��%d�ſε���߷�Ϊ%d��\n",j,highsest(a,number,j));
	printf("Ҫ�����ĸ�ѧ���ĳɼ���");
	scanf("%d",&i);
    printf("��%d��ѧ���ĳɼ�Ϊ��",i);
	output_stu(a,i);
    return 0;
}

