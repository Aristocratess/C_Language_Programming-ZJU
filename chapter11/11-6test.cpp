#include<stdio.h>
int main()
{
	int i;
	char *poem[4]={"һҶ����������","�������������֣�","���˱̲�΢���裬","˳ˮ�δ��ſ��ơ�"};
	//һ��������2���ַ���ɣ�������ʵ�ʲ���ʱ��ȡ��ÿ���ַ�����ǰ�����ַ� 
	char mean[10];
	for(i=0;i<4;i++)
	{
		mean[2*i]=*(poem[i]);
		//printf("%s\n",mean);
		mean[2*i+1]=*(poem[i]+1);
		printf("%s\n",mean);
	}
	mean[2*i]='\0';
	printf("%s\n",mean);
	return 0;
}
