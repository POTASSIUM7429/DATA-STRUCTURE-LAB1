/*--------------*/
int IntiaList(SqList & L);
//status DestroyList(SqList & L);
//status ClearList(SqList &L);
//status ListEmpty(SqList L);
//int ListLength(SqList L);
//status GetElem(SqList L,int i,ElemType & e);
//int LocateElem(SqList L,ElemType e); //简化过
//status PriorElem(SqList L,ElemType cur,ElemType & pre_e);
//status NextElem(SqList L,ElemType cur,ElemType & next_e);
//status ListInsert(SqList & L,int i,ElemType e);
int ListDelete(SqList & L,int i,ElemType & e);
int ListTrabverse(SqList L);  //简化过

FILE* filesetup();//文件清空和初始化
int fileupdate(FILE* file,Sqlist L);//文件更新,L中数据写入file
//文件格式:
//length: L->length
//L->elem[1]\t[2]...
void Exit();//退出
