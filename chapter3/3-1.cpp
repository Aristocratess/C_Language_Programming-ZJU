#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float perimeter,area,half_peri;
	printf("�����������ε�������a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b<c||a+c<b||b+c<a)
	  printf("These sides do not correspond to a valid triangle.\n");
	else
	{
		perimeter=a+b+c;
		half_peri=perimeter/2;
		area=sqrt(half_peri*(half_peri-a)*(half_peri-b)*(half_peri-c));//���׹�ʽ 
		printf("�����ε������%0.2f,�ܳ���%0.2f",area,perimeter);//������λС�� 
	}
	return 0;
}
