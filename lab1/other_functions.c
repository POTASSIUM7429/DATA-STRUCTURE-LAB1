//�������ʵ��
//to do:�������������ʵ��
char* filenames(int number)
{char* filename[20];
char* numbed[4];
itoa(number,numbed,10);
char* temp[255]=strcat("list",numbed);
return stract(temp,".txt");}
