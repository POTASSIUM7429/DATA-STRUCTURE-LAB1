//这里是杂项函数的声明
char* filenames(int number);//给文件命名,输入第几个,输出"list%d.txt"
bool exit();//安全弹出程序
void message_dealer(int status);//正常或报错信息处理程序
float* readfile(FILE* file);//读文件,放置于缓冲区data[255];
//这个函数记得要内建读写错误警报代码
bool writefile(float* data);//写文件,data->file
