#include <stdio.h>
#include <string.h>
int main()
{
   char str[200],str1[10]="for";
   FILE *fp;
   if((fp=fopen("F:\\CODE4funny\\c_language_programming\\f12-3.txt","rt"))==NULL) //�����ڳ���Ŀ¼�£����������λ�ã�����·��
   {
      printf("cannot open file\n");
      return 0;
   }
   while (fgets(str,200,fp)) //��ȡһ�У����ж��ļ��Ƿ����
   { 
      if(strstr(str,str1)) //�Ƚ�str�Ƿ����str1
      printf("%s",str);//��Ϊstr�Ѿ��������з�������Ҫ��\n
   }
     fclose(fp);
   return 0;
}
