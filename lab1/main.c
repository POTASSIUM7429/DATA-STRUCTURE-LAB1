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
    printf("1.初始化线性表\t7.查找元素\n");
    printf("2.销毁表\t8.获得前驱\n");
    printf("3.清空表\t9.获得后继\n");
    printf("4.判定空表\t10.插入元素\n");
    printf("5.表长\t\t11.删除元素\n");
    printf("6.获得元素\t12.遍历\n");
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
    //to do: 完成接下来 进口出口处理 11/30
    }
}
