#include<stdio.h>
#include<malloc.h>
typedef struct KillCircle{
	int data;
	struct KillCircle *next;
}KCircle;
int main()
{
	int m,n;
	int i,j=0;
	KCircle *p,*q,*L;
	printf("Ҫ������ٸ��ˣ�");
	scanf("%d",&n);
	p=(KCircle*)malloc(sizeof(KCircle));
	L=p;
	p->data=1;
	p->next=NULL;
	for(i=1;i<n;i++)
	{
		q=(KCircle*)malloc(sizeof(KCircle));
		q->data=i+1;
		p->next=q;
		p=p->next;
		//printf("%d\n",p->data);
		p->next=NULL;
	}
	p->next=L;
	//printf("%d\n%d\n",p->data,L->data);
	printf("�����ڼ������˳���");
	scanf("%d",&m);
	if(m>n)
	  printf("������󣡣���");
	else
	{
	  p=L;
	  printf("�������Ϊ��\n"); 
	  while(p->next!=p)
	  {
	  	j++;
	  	if((j+1)%m==0)
		{
			q=p->next;
			p->next=q->next;
			printf("%d\n",q->data);
			free(q);
			j++;
		}
		p=p->next;
	  }	
	  printf("ʣ�µ�Ϊ%d",p->data);
	}  
	return 0;
} 
