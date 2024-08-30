#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	struct S arr[n];//error
//	return 0;
//}
//malloc
//void *malloc( size_t size );
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	//向内存申请10个整型的空间
	int* p = (int*)malloc(10*sizeof(int));//malloc(10*sizeof(int))返回的是void*
	if(p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n",strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for(i=0;i<10;i++)
		{
			printf("%d ",*(p+i)=i);
		}
	}
	//当动态申请的空间不再使用的时候
	//就应该还给操作系统
	//free
	//void free( void *memblock );
	free(p);//p依然能找到这个空间
	p = NULL;//让p找不到这块空间
	system("pause");
	return 0;
}