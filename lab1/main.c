#include "stdio.h"
//#include "function_lisence.h"
#define MAXLISTS 255
#define MAXLENTH 255
int main()
{

    list_pointer[0]=fopen(filenames(1),"a+");

    printf("Standard Sequence Table Sys.\n");
    printf("----------------------------\n");
    if(NULL==list_pointer)
    {
        printf("File Open Error!\n");
        return 0;
    }
    printf("1.��ʼ�����Ա�\t7.����Ԫ��\n");
    printf("2.���ٱ�\t8.���ǰ��\n");
    printf("3.��ձ�\t9.��ú��\n");
    printf("4.�ж��ձ�\t10.����Ԫ��\n");
    printf("5.��\t\t11.ɾ��Ԫ��\n");
    printf("6.���Ԫ��\t12.����\n");
    printf("----------------------------\n");
    printf("0.Exit\n");
    printf("\n put in number to steg in\n");

    scanf("%d",&chosen_status);
    data=readfile(list_pointer[listnow]);
    switch(chosen_status)
    {
        case 0:status=exit();status=writefile(data);message_dealer(status);return 0;
        case 1:status=InitaList();break;
        case 2:status=DestroyList(data);status=writefile(data);message_dealer(status);break;
        case 3:status=ClearList(data);status=writefile(data);message_dealer(status);break;
    //to do: ��ɽ����� ���ڳ��ڴ��� 11/30
    }
}
