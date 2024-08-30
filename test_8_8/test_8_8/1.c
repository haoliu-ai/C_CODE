#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////calloc
////void *calloc( size_t num, size_t size );
//#include<stdlib.h>
//#include<string.h>
//int main()
//{ 
//	//malloc(10*sizeof(int))
//	int* p = (int*)calloc(10,sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}
////realloc
////void *realloc( void *memblock, size_t size );
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int* p = (int*)malloc(20);
//	int* ptr = 0;
//	int i = 0;
//	if(p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<5;i++)
//		{
//			*(p+i) = i;
//		}
//	}
//	//使用malloc开辟的20个字节空间
//	//假设20个字节不能满足我们的使用
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	ptr = (int*)realloc(p,INT_MAX);
//	if(ptr != NULL)
//	{
//		p = ptr;
//		i = 0;
//		for(i=5;i<10;i++)
//		{
//			*(p+i) = i;
//		}
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//释放内存
//	free(p);//p指向的新的空间，旧的p指向的空间也会被释放
//	p = NULL;
//	system("pause");
//	return 0;
//}
#include<stdlib.h>
//////常见的动态内存错误
////1.对空指针进行解引用操作
//void test()
//{
//	int* p = (int*)malloc(INT_MAX/4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}
////2.对动态开辟的内存的越界访问
//int main()
//{
//	int* p = (int*)malloc(5*sizeof(int));
//	if(p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)//越界访问
//		{
//			*(p+i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
////3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//error
//	return 0;
//}
////4.使用free释放动态开辟内存的一部分
//int main()
//{
//	int* p =(int*)malloc(40);
//	if(p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		*p++ = i;
//	}
//	//回收空间
//	free(p);//此时p指向的不是刚才动态开辟的空间的起始位置，只释放了一部分
//	p = NULL;
//	return 0;
//}
////5.对同一块动态内存的多次释放
//int main()
//{
//	int* p =(int*)malloc(40);
//	if(p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	free(p);//error
//	return 0; 
//}
////6.动态开辟内存忘记释放（内存泄露）
//#include<Windows.h>
//int main()
//{
//	while(1)
//	{
//		malloc(1);
//	}
//	return 0;
//}
//#include<string.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//动态开辟内存没有释放,函数结束后动态开辟的内存无法找到，所以会造成内存泄漏
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//str未发生改变
//  strcpy(str,"hello world");
//	printf(str);//等价于printf("%s\n",str);
//}
//int main()
//{
//	Test();
//	system("pause");
//	//程序崩溃
//	return 0;
//}
////改正 
////1.
//#include<string.h>
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);//动态开辟内存没有释放,函数结束后动态开辟的内存无法找到，所以会造成内存泄漏
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//str未发生改变
//  strcpy(str,"hello world");
//	printf(str);//等价于printf("%s\n",str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
////2.
//#include<string.h>
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);//动态开辟内存没有释放,函数结束后动态开辟的内存无法找到，所以会造成内存泄漏
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);//str未发生改变
//  strcpy(str,"hello world");
//	printf(str);//等价于printf("%s\n",str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
char* GetMemory(void)
{
	char p[] = "hello world";//在栈区上开辟空间
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();//函数结束，栈区上的空间被销毁，str无法找到p指向的空间
	printf(str);
}
int main()
{
	Test();
	system("pause");
	return 0;
}