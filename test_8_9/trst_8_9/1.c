#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdlib.h>
#include<stdio.h> 
//void GetMemory(char** p,int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str,100);
//	strcpy(str,"hello");
//	printf(str);
//	//没有释放开辟的动态内存空间，导致内存泄露
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str,"hello");
//	free(str);//空间已经释放，str变成野指针
//	if(str != NULL)
//	{
//		strcpy(str,"world");//非法访问内存
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
//struct S
//{
//	int n;
//	int arr[];//未知大小的-柔性数组成员-数组的大小是可以调整的
//	//int arr[0];
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n",sizeof(s));//4,柔性数组不计入字节大小
//	int i = 0;
//	struct S* ptr = NULL;
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));//ps指向结构体的起始位置的地址
//	//sizeof(struct S)+5*sizeof(int)
//	//表示struct S的字节大小再加上自己需要的数组的字节大小
//	ps->n = 100;
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i] = i;
//	}
//	ptr = (struct S*)realloc(ps,44);
//	if(ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for(i=5;i<10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	//释放空间
//	free(ps);
//	ps = NULL;
//	system("pause");
//	return 0;
//}
struct S
{
	int n;
	int* arr;
};
int main()
{
	int i = 0;
	int* ptr = NULL;
	struct S* ps = (struct S*)malloc(sizeof(int));
	ps->arr = (int*)malloc(5*sizeof(int));//操作结构体中的arr
	for(i=0;i<5;i++)
	{
		ps->arr[i] = i;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",ps->arr[i]);
	}
	//调整大小
	ptr = (int*)realloc(ps->arr,10*sizeof(int));
	if(ptr != NULL)
	{
		ps->arr = ptr;
	}
	for(i=5;i<10;i++)
	{
		ps->arr[i] = i;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",ps->arr[i]);
	}
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	system("pause");
	return 0;
}