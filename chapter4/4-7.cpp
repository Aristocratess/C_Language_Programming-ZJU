#include<stdio.h>
#include<math.h>
int main()
{
	int i,n=0;
	int sum=0,t;
	for(i=1;i<=10000;i++)
	{
		n=i;
		//printf("%d\n",n);
		/*while(n%10!=n)
		{
			t=n%10;
			n=n/10;
			sum=sum+pow(t,3);
		//	printf("%d",pow(t,3));
		}*/
		sum=0;//֮ǰ���˰�sum������0��һֱ�������� 
		while(n%10!=n)
    	{
		    sum+=pow(n%10,3);
		    n=n/10;
    	} 
		//printf("%d\n",sum);
		sum=sum+pow(n,3);
		//printf("%d\n",pow(2,3));
		if(sum==i)
		  printf("%d�Ǹ�λ���ֵ������͡�\n",sum);
	}
	return 0;
}
