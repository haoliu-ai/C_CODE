#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf,0,SEEK_CUR);
//	//2.读取文件
//	printf("%c\n",fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int pos = 0;
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf,-3,SEEK_END);
//	fgetc(pf);//读完一个字符，指针向后偏移一位
//	//pos = ftell(pf);
//	rewind(pf);
//	//printf("%d\n",pos);
//	printf("%c\n",fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test2.txt","r");
//	if(pf == NULL)
//	{
//		perror("file");//file: No such file or directory 
//		system("pause");
//		return 0;
//	}
//	//读文件
//	
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
int main()
{
	int ch = 0;
	FILE* pf = fopen("test.txt","r");
	if(pf == NULL)
	{
		perror("file");//file: No such file or directory 
		system("pause");
		return 0;
	}
	//读文件
	while((ch=fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if(ferror(pf))
	{
		printf("error\n");
	}
	else if(feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}