#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//写日志文件
//	int arr[10] = {0};
//	int i = 0;
//	FILE* pf = fopen("log.txt","w");
//	for(i=0;i<10;i++)
//	{
//		arr[i] = i;
//		fprintf(pf,"file:%s line:%d date:%s time:%s i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("%d\n",__STDC__);
//	return 0;
//}
//#define SQUARE(X) X*X
//int main()
//{
//	int ret = SQUARE(5);//int ret = X*X = 5*5
//	printf("%d\n",ret);
//	return 0;
//}
//void print(int a)
//{
//	printf("the value of a is %d\n",a);
//}
//int main()
//{
//	int a = 10;
//	print(a);
//	print(b);
//	system("pause");
//	return 0;
//}
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
////#X在预处理时会转化成X所对应的字符串"X "
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hel""lo ""world\n");*/
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	system("pause");
//	return 0;
//}
//#define CAT(X,Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n",CAT(Class,84));
//	return 0;
//}
//int max(int x,int y)
//{
//	return (x>y)?(x):(y);
//}
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))//定义宏
//int main()
//{	
//	int a = 10;
//	int b = 11;
//	//int max1 = MAX(a++,b++);//((a++)>(b++)?(a++):(b++))  
//	int max1 = MAX(a,b);
//	//预处理阶段就完成了替换，没有函数的调用和返回的开销
//	int max2 = max(a,b);
//	//函数在调用的时候，会有函数调用和返回的开销
//	printf("%d\n",max1);
//	printf("%d\n",max2); 
//	//printf("%d\n",max);
//	system("pause");
//	return 0;
//}
//#define test(x,y) printf("test\n");//宏内容过长，在替换时会大幅度增加程序的长度
//int main()
//{
//	test();
//	test();
//	test(); 
//	return 0;
//}
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int); 
//	return 0;
//}
//#include<stdlib.h>
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int *p = MALLOC(10,int);
//	return 0; 
//}
//#define DEBUG
//int main()
//{
//#ifdef DEBUG
//	printf("haha\n");
//#endif
//	system("pause");
//	return 0;
//}
#include<stddef.h>
struct S
{
	char c1;
	int a;
	char c2;
};
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//(struct_name*)0  将结构体起始地址设置为0，将0强制转换为结构体指针
//((struct_name*)0)->member_name  通过结构体指针找到结构体成员
//&(((struct_name*)0)->member_name)  取出成员地址
//(int)&(((struct_name*)0)->member_name)  将地址转换为整型
//结构体起始地址为0，则结构体成员对应的地址转换为整型为偏移量
int main()
{
	printf("%d\n",OFFSETOF(struct S,c1));
	printf("%d\n",OFFSETOF(struct S,a));
	printf("%d\n",OFFSETOF(struct S,c2));
	system("pause");
	return 0;
}