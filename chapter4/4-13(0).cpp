#include<stdio.h>
#include<math.h>
//��4-13����һ�ֽⷨ 
int main()
{
	int a,b;
	for(a=-3;a<=3;a++)
	{
		for(b=1;b<=abs(a);b++)
		   printf(" ");
		for(b=abs(a)-3;b<=3-abs(a);b++)
		   printf("*");
		printf("\n");
	}
}
