#include<stdio.h>
int main()
{
	int n,s=0,d=0;
	int t;
	printf("������һ��������");
	scanf("%d",&n);
	t=n;
	while(n%10!=n)
	{
		s+=n%10;
		n=n/10;
		d++;
	 } 
	s+=n;
	d++;
	printf("%d�ĸ�λ����֮��Ϊ%d������%dλ��",t,s,d);
	return 0;
}
