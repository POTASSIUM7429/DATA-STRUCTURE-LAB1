//这里是十二个运算函数的声明部分
//to do:完成函数的说明准备下一步 11/30
bool InitaList();//修改:啥都不干?
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
//下面是回显处理程序
int feedback(int status);
