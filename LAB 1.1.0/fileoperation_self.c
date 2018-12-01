FILE* filesetup()
{
    FILE* temp=NULL;
    temp=fopen("list.txt","w+");
    return temp;
}
int fileupdate(FILE* file,Sqlist L)
{if(L.elem==NULL)
{
    fprintf(file,"");
    return 1;
}
    int i=0;
int sta=0;
for(;i<L.length;i++)
    {sta=fprintf(file,"%d\t",*(L.elem+i));
    if(sta<0)
        {printf("update failed\n");
        return 0;}
    }
    return 1;
}
