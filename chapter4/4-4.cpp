#include<stdio.h> 
int main()
{
	int n,i;
	float fenzi=2,fenmu=1,copy_fenzi;//֮ǰ�Ѵ˴���Ϊint�ͣ�������ȳ������� 
	float sum=0;
	printf("������������n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum+=fenzi/fenmu;
		copy_fenzi=fenzi;
		fenzi=fenzi+fenmu;
		fenmu=copy_fenzi;
	}
	printf("sum=%0.2f",sum);
	return 0;
}
