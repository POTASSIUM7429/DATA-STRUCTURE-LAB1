
#include <stdio.h>
#include <stdlib.h>
typedef  struct {
	char c;	int  d;	float f;
}  ElemType;
typedef struct {
	ElemType  elem[10];	int length;
} SqList;
SqList L={{{'a',1,1.1},{'b',2,2.2},{'c',3,3.3},{'d',4,4.4}}, 4};

int main(int argc, char *argv[]) {
FILE  *fp;  char filename[30];  int i;
printf("input file name: ");
scanf("%s",filename);

//д�ļ��ķ���
if ((fp=fopen(filename,"w"))==NULL)
	{
	 printf("File open error\n ");
	return 1;
	}
fwrite(L.elem,sizeof(ElemType),L.length,fp);
//������1����д�룬������������ṹ����ͨ�������������������Ԫ��
//��д�뵽�ļ���
fclose(fp);

//���ļ��ķ���
L.length=0;
if ((fp=fopen(filename,"r"))==NULL)
	{
	 printf("File open erroe\n ");
	 return 1;
	}
while(fread(&L.elem[L.length],sizeof(ElemType),1,fp))
   L.length++;
//������ļ��������ȡ����Ԫ�ػָ�˳������ڲ�ͬ������ṹ����ͨ����//ȡ������Ԫ�ػָ��ڴ��е�����ṹ��
fclose(fp);
return 0;
}
