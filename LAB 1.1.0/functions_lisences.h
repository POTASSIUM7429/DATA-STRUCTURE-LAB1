/*--------------*/
int IntiaList(SqList & L);
//status DestroyList(SqList & L);
//status ClearList(SqList &L);
//status ListEmpty(SqList L);
//int ListLength(SqList L);
//status GetElem(SqList L,int i,ElemType & e);
//int LocateElem(SqList L,ElemType e); //�򻯹�
//status PriorElem(SqList L,ElemType cur,ElemType & pre_e);
//status NextElem(SqList L,ElemType cur,ElemType & next_e);
//status ListInsert(SqList & L,int i,ElemType e);
int ListDelete(SqList & L,int i,ElemType & e);
int ListTrabverse(SqList L);  //�򻯹�

FILE* filesetup();//�ļ���պͳ�ʼ��
int fileupdate(FILE* file,Sqlist L);//�ļ�����,L������д��file
//�ļ���ʽ:
//length: L->length
//L->elem[1]\t[2]...
void Exit();//�˳�
