#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt","wb");//wb -- 二进制的形式写到文件中
	fwrite(&a,4,1,pf);//在test.txt文件中写入一个四个字节的数据a(10000)
	fclose(pf);
	pf = NULL;
	return 0;
}
