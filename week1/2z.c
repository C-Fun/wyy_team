#include <stdio.h>
int main(void)
{
char name[80];
FILE *fp=fopen("C:\ss.txt","w");/*��дģʽ("w")���ļ�ss.txt,���������,���Զ�����*/
gets(name);

fputs(name,fp);
/*���������ַ�����ʽд���ļ�*/
fclose(fp);/*�ر��ļ�*/
return 0;
}