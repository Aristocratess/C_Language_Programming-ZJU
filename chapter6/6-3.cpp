#include<stdio.h>
//֮ǰ����getchar()�����������˺ܾ�Ҳ�벻���ⷨ��
//�������ϵĽ�𣬿���������scanf���ֱ��������ֺ��ַ� 
int main()
{
	int sum=0;
	int n;
	char c=0;
	printf("��������������");
	scanf("%d",&n);
	sum=n;
	while(c!='=')
	{
		scanf("%c",&c);
		if(c=='=')
		break;
		scanf("%d",&n);
		switch(c)
		{
			case'+':
				sum+=n;
				break;
			case'-':
				sum-=n;
				break;
			case'*':
			    sum*=n;
			    break;
			case'/':
				sum/=n;
				break;
			default:
				//printf("ERROR!!!\n");
				break;
		}
	 } 
	 printf("������Ϊ%d:",sum);
	 return 0;
 } 
