#include<stdio.h>
int search(int list[],int n,int x);
int main()
{
	int a[10];
	int i,x,m;
	printf("������10��������");
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	printf("����һ������x���������������Ƿ���ڣ�");
	scanf("%d",&x);
	m=search(a,10,x);
	if(m==-1)
	  printf("Not found.");
	else
	  printf("Ԫ��%d�������е�λ��Ϊ%d",x,m);
    return 0;
 }

int search(int list[],int n,int x)
{
	int i,j=0;
	for(i=0;i<n;i++)
    {
     j++;
     if(list[i]==x)
	    return i;
	}
	j++;
	if(j>n)
	 return -1;
 } 
