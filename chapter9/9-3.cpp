#include<stdio.h>
struct ComplexNumber{
	int a;
	int b;
};
int main()
{
	struct ComplexNumber m,n;
	printf("�����һ��������\n");
	scanf("%d+%di",&m.a,&m.b);
	printf("����ڶ���������\n");
	scanf("%d+%di",&n.a,&n.b);
	printf("����������֮��Ϊ��%d+%di",m.a*n.a-m.b*n.b,m.a*n.b+m.b*n.a);
	return 0;
}
