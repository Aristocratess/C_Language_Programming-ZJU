#include<stdio.h>
int even(int n);
int main()
{
	int n;
	int odd_sum=0;
	printf("������һ��������������Ϊ0ʱ��������");
	scanf("%d",&n);
	while(n!=0)
	{
		if(!even(n))
		  odd_sum+=n;
		printf("���������������������Ϊ0ʱ��������");
		scanf("%d",&n);
	}
	if(odd_sum>0)
    	printf("���������������Ϊ%d��",odd_sum);
    else
        printf("ERROR!!!");
	return 0; 
}

int even(int n)
{
	if(n%2==0)
	  return 1;
	else 
	  return 0;
}
