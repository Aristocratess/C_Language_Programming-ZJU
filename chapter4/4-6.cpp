#include<stdio.h>
int main()
{
	int n,one=0,two=0,five=0;
	int i=0;
	for(one=0;one<=100;one++)
	  for(two=0;two<=50;two++)
	     for(five=0;five<=20;five++)
	       {
	       	if((one>0&&two>0&&five>0)&&(one+2*two+5*five==100))
            {
               i++;
	           printf("��%d�ַ�����1��Ӳ����%dö��2��Ӳ����%dö��5��Ӳ����%dö��\n",i,one,two,five);
			}
		   }
	printf("һ����%d�ַ���\n",i);
	return 0;
}
