#include<stdio.h>
#include<math.h>
float funcos(float e,int x);
int factorial(int n);
int main()
{
	float e;
	int x;
	printf("�����뾫��e:");
	scanf("%f",&e);
	printf("������x��ֵ:");
	scanf("%d",&x);
	printf("����Ϊe��cosx��ֵΪ:%f",funcos(e,x));
	return 0; 
}

float funcos(float e,int x)
{
	int i=0,j=0;
	float cos_x=0;
	while(pow(x,i)/factorial(i)>e)
	{
		j++;
		if(j%2!=0)
		  cos_x+=pow(x,i)/factorial(i);
		else
		  cos_x-=pow(x,i)/factorial(i);
		i++;
	}
	return cos_x;
}

int factorial(int n)
{
	int sum=1;
	int i;
	if(i==0)
	  return 1;
	for(i=1;i<=n;i++)
	  sum*=i;
	return sum;
}
