//������ʮ�������㺯������������
//to do:��ɺ�����˵��׼����һ�� 11/30
bool InitaList();//�޸�:ɶ������?
bool DestroyList(float* L);
bool ClearList(float* L);
bool ListEmpty(float* L);
int ListLength(float* L);
float GetElem(float* L,i,e);
int LocateElem(float* L,e);
int PriorElem(float* L,float cur_e);
float NextElem(float* L,float cur_e);
bool ListInsert(float* L,i,e);
bool ListDelete(float* L,i,e);
bool ListTraverse(float* L,visit());
//�����ǻ��Դ������
int feedback(int status);
