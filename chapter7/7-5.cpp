#include<stdio.h>
int main()
{
	int i,j,k,l;
	int n,t,max,min;
	int m=0;
	int a[6][6]; 
	printf("������һ��������n(1<=n<=6):");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
	   {
	   	 scanf("%d",&a[i][j]);
	   }
	for(i=0;i<n;i++)
	  {
	  	max=0;
	  	for(j=0;j<n;j++)//�ҵ���Ӧ�е����ֵ 
	    {
	  	 if(a[i][j]>max)
	  	 {
	  	 	max=a[i][j];
	  	    k=j;
	  	    t=i;
		 } 
	    }
	    min=a[0][k];
        for(j=0;j<n;j++)//�����ֵ��Ӧ������Сֵ 
        {
          if(a[j][k]<min)
          {
          	min=a[j][k];
          	l=j;
		  }
		}
	  if(t==l)//���е����ֵ���е���Сֵ�Ƿ���ͬһ�� 
      {
      	m++;
      	printf("a[%d][%d]�ǰ���,��ֵΪ%d��",i,k,a[i][k]);
	  }
     } 
	if(m!=1)
	  printf("NO!");
    return 0;
}
