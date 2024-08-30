#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
////fopen
////FILE *fopen( const char *filename, const char *mode );
//int main()
//{
//	/*//打开文件test.txt
//	//相对路径
//	fopen("text.txt","r");
//	//..表示上一级路径
//	//fopen("../test.txt","r")
//	//.表示当前路径
//	//绝对路径
//	fopen("D:\c语言\代码\test_8_11\test_8_11","r");*/
//	FILE* pf = fopen("test.txt","w");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		system("pause");
//		return 0;
//	}
//	//打开文件
//	//读文件
//	//关闭文件
//	//fclose
//	//int fclose( FILE *stream ); 
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	FILE* pfwrite = fopen("TEST.txt","w");
//	if(pfwrite == NULL)//没有打开成功
//	{
//		printf("%s\n",strerror(errno));
//		system("pause");
//		return 0;
//	}
//	//写文件
//	fputc('b',pfwrite);
//	fputc('i',pfwrite);
//	fputc('t',pfwrite);
//	//关闭文件
//	fclose(pfwrite);
//	pfwrite = NULL;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	FILE* pfread = fopen("test.txt ","r");
//	if(pfread == NULL)//没有打开成功
//	{
//		printf("%s\n",strerror(errno));
//		system("pause");
//		return 0;
//	}
//	//读文件
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch,stdout);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char buf[1024] = {0};
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		return 0; 
//	}
//	//读文件
//	fgets(buf,1024,pf);
//	//printf("%s",buf);
//	puts(buf);
//	fgets(buf,1024,pf);
//	//printf("%s",buf);
//	puts(buf);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char buf[1024] = {0};
//	FILE* pf = fopen("test.txt","w");
//	if(pf == NULL)
//	{
//		return 0; 
//	}
//	//写文件
//	fputs("hello",pf);
//	fputs("world",pf);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//从键盘上读取一行文本信息
//	char buf[1024] = {0};
//	//fgets(buf,1024,stdin);//默认输入流
//	//fputs(buf,stdout);//默认输出流
//	gets(buf);
//	puts(buf);
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100,3.14f,"bit"};
//	FILE* pf = fopen("test.txt","w");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);//文件流
//	//关闭文件
//	fclose(pf);
//	pf = NULL; 
//	return 0;
//}
struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s = {0};
	FILE* pf = fopen("test.txt","r");
	if(pf == NULL)
	{
		return 0;
	}
	//格式化的输入数据
	fscanf(pf,"%d %f %s",&(s.n),&(s.score),s.arr);//文件流
	printf("%d %f %s",s.n,s.score,s.arr);
	//关闭文件
	fclose(pf);
	pf = NULL; 
	system("pause");
	return 0;
}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),s.arr);//默认输入流
//	fprintf(stdout,"%d %f %s",s.n,s.score,s.arr);//默认输出流
//	system("pause");
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100,3.14f,"abcdef"};
//	struct S tmp = {0};
//	char buf[1024] = {0};
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf,"%d %f %s",s.n,s.score,s.arr);
//	printf("%s\n",buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf,"%d %f %s",&(tmp.n),&(tmp.score),tmp.arr);
//	printf("%d %f %s",tmp.n,tmp.score,tmp.arr);
//	system("pause");
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = {"张三",20,55.6};
//	FILE* pf = fopen("text.txt","wb");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s,sizeof(struct S),1,pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S tmp = {0};
//	FILE* pf = fopen("text.txt","rb");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp,sizeof(struct S),1,pf);
//	printf("%s %d %lf",tmp.name,tmp.age,tmp.score);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}