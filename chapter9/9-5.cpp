#include<stdio.h>
struct AdressBook{
	char name[10];
	long birthday;
	char phonenumber[12];
	char adress[25];
};
int main()
{
	int n;
	long temp;
	int i,j;
	//struct AdressBook max;
	printf("����n(n<=10)���˵���ϵ��Ϣ��\n");
	scanf("%d",&n);
	struct AdressBook book[n];
	for(i=0;i<n;i++)
	{
		printf("�������%d���˵Ļ�����Ϣ��\n",i+1);
		printf("�������%d���˵����֣�\n",i+1);
		scanf("%s",&book[i].name);
		printf("�������%d���˵����գ�\n",i+1);
		scanf("%ld",&book[i].birthday);
		printf("�������%d���˵ĵ绰���룺\n",i+1);
		scanf("%s",&book[i].phonenumber);
		printf("�������%d���˵�סַ��\n",i+1);
		scanf("%s",&book[i].adress);
	}
	for(i=0;i<n;i++)
	  for(j=0;j<n-i;j++)
	   {
	   	  if(book[j].birthday<book[j+1].birthday)
	   	     temp=book[j].birthday;
			 book[j].birthday=book[j+1].birthday;
	   	     book[j+1].birthday=temp;
	   }
	for(i=0;i<n;i++)
	  printf("%s�Ļ�����ϢΪ�����գ�%ld,�绰���룺%s,��ַ��%s��\n",book[i].name,book[i].birthday,book[i].phonenumber,book[i].adress);
	return 0;
}
