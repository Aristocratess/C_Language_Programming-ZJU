#include<stdio.h>
int main()
{
	int i,j;
	char c;
	int a[10],b[10];
	int temp;
	printf("����������10��������"); 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<10;i++)
	  for(j=0;j<10-i;j++) 
	   if(b[j]>b[j+1]){
	   	 temp=b[j];
	   	 b[j]=b[j+1];
	   	 b[j+1]=temp;
	   }
	printf("����'A',����10������С����˳�����������'D',����10�����Ӵ�С˳�����."); 
	c=getchar();//���˰˰���ŵ��������ᱼ��~~ 
	if(c=='\n') 
      c=getchar();
	if(c=='A')
    {
    	for(i=0;i<10;i++)
    	  printf("%d ",b[i]);
	}
	else if(c=='D')
    {
    	for(i=9;i>=0;i--)
    	  printf("%d ",b[i]);
	}
	else
	  printf("������󣡣���");
	return 0; 
}
