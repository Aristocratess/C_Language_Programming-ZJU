#include<stdio.h>
struct Book{
	char name[10];
	int price;
};
int main()
{
	struct Book b[10];
	int i;
	struct Book min,max;
	printf("������10��������ƺͶ��ۣ�\n");
	for(i=0;i<10;i++)
	{
		printf("�������%d��������ƺͶ��ۣ�\n",i+1);
		scanf("%s %d",&b[i].name,&b[i].price);
		if(i==0)
		{
			min.price=b[0].price;
			min.name=b[0].name;
			max.price=b[0].price;
			max.name=b[0].name;
		}
		if(b[i].price<min.price)
		{
			min.price=b[i].price;
			min.name=b[i].name;
		}
		if(b[i].price>max.price)
		{
			max.price=b[i].price;
			max.name=b[i].name;
		}
	}
	printf("������ߵ��������Ϊ%s,����Ϊ%d��",max.name,max.price);
	printf("������͵��������Ϊ%s,����Ϊ%d��",min.name,min.price);
	return 0;
}
