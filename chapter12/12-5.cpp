#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s1[99];
	int n,i,j,count;
	char ch;
	FILE *fp1,*fp2;
	if((fp1=fopen("12-4.cpp","r"))==NULL)
	{
		printf("File open error!\n");
        exit(0);
	}
	if((fp2=fopen("12-5test.cpp","w"))==NULL)
	{
		printf("File open error!\n");
		exit(0);
	}
	while(!feof(fp1)){
		ch = fgetc(fp1);
		if(ch == EOF)
			continue;
		if(ch == '/'){
			ch = fgetc(fp1);
			//����ע�� ���������з���������������������з� 
			if(ch == '/'){
				while(ch != '\n' && ch != EOF){
					ch = fgetc(fp1);
				}
				fputc('\n',fp2);
			}
			/*����ע�ͣ�����������������ÿ�ζ���99���ַ����бȽϣ����������˻�һ���ַ��������Ƚ�*/ 
			else if(ch == '*'){
				fgets(s1, 99, fp1);
				while(strstr(s1, "*/")==NULL){
					fseek(fp1, -1L, SEEK_CUR);
					fgets(s1, 99, fp1);
				}				
			}
			//����ע�ͷ���ֻ�ǵ�����'/'���ţ����˻������ַ�����д'/' 
			else{
				fseek(fp1, -2L, SEEK_CUR);
				ch = fgetc(fp1);
				fputc(ch, fp2);
			}			
		}
		else{
			fputc(ch,fp2);
		}			
	} 	 
	if(fclose(fp1))
	{
		printf("Can not close the file!\n");
		exit(0);
	}
	if(fclose(fp2))
	{
		printf("Can not close the file!\n");
		exit(0);
	}
	return 0;
}
