
status DestroyList(SqList &L)
{
    int sta=0;
    free(L->elem);
    L->elem=NULL;
    sta=fileupdate(listfile,L);
    return sta;

}
status ClearList(SqList &L)
{   int i=L->length-1;
    for(;i>=0;i--)
    {
        free(L->elem+i);
    }

  L->length=0;
  L->listsize=0;
    return 1;
}
status ListEmpty(SqList L)
{
    if(L->length)
        return 1;
    else
        return 0;
}
int ListLength(SqList L)
{
    return L->length;
}
status GetElem(SqList L,int i,ElemType & e)
{
    if(i>=L->length)
    {
        printf("Invalid input\n");
        return 0;
    }
    *e=*(L->elem+i-1);
    return 1;
}
int LocateElem(SqList L,ElemType e)
{
    int i=0;
    for(;i<L->length;i++)
    {
        if(*(L->elem+i)==e)
        {
            return i+1;
        }
    }
    return 0;
}
status PriorElem(SqList L,ElemType cur,ElemType & pre_e)
{
    int order=0;
    order=LocateElem(L,cur);
    if(order==1)
    {
        printf("there is no prev node\n");
        return 1;
    }
    else
    {
        if(order<0)
        {
            printf(cur not find\n);
            return 0;
        }
        else
        {
            printf("prev node's order is %d,data=%d",order,*(L->elem+order-2));
            return 1;
        }
    }
}
status NextElem(SqList L,ElemType cur,ElemType & next_e)
{
   int order=0;
    order=LocateElem(L,cur);
    if(order==L->length)
    {
        printf("there is no next node\n");
        return 1;
    }
    else
    {
        if(order<0)
        {
            printf(cur not find\n);
            return 0;
        }
        else
        {
            printf("next node's order is %d,data=%d",order,*(L->elem+order));
            return 1;
        }
    }
}
status ListInsert(SqList & L,int i,ElemType e)
{

}
