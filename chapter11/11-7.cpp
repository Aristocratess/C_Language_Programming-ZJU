#include<stdio.h>
#include<stdlib.h>
struct Linklist{
	int num;
	char name[15];
	struct Linklist *next;
};
int main()
{
	struct Linklist *p,*q,*list1,*list2;
	int m,n;
	int i;
	//list1=l1;
	//list2=l2;
	printf("list1Ҫ������ٸ�ѧ������Ϣ��\n");
	scanf("%d",&m);
	printf("�������%d��ѧ������Ϣ��ѧ�š����֣���\n",i+1);
	list1=(struct Linklist*)malloc(sizeof(struct Linklist));
	scanf("%d %s",&((list1)->num),(list1)->name);
	list1->next=NULL;
	for(i=1;i<m;i++)
	{
		printf("�������%d��ѧ������Ϣ��ѧ�š����֣���\n",i+1);
		p=(struct Linklist*)malloc(sizeof(struct Linklist));
	    scanf("%d %s",&(p->num),p->name);
	    list1->next=p;
	    p->next=NULL;
	}
	printf("list2Ҫ������ٸ�ѧ������Ϣ��\n");
	scanf("%d",&n);
	printf("�������1��ѧ������Ϣ��ѧ�š����֣���\n");
	list2=(struct Linklist*)malloc(sizeof(struct Linklist));
	scanf("%d %s",&((list2)->num),(list2)->name);
	list2->next=NULL;
	for(i=1;i<n;i++)
	{	
	    printf("�������%d��ѧ������Ϣ��ѧ�š����֣���\n",i+1);
		q=(struct Linklist*)malloc(sizeof(struct Linklist));
	    scanf("%d %s",&(q->num),q->name);
	    list2->next=q;
	    q->next=NULL;
	}
	printf("��list2����list1֮��\n");
	p=list1;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=list2;
	//p=list1;
	for(i=0;i<m+n;i++)
	{
		printf("%d %s\n",list1->num,list1->name);
		list1=list1->next;
	}
	return 0;
} 
