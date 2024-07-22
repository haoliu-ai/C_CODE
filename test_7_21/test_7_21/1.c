#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y; 
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("****    1.+   2.-   *********\n");
//	printf("****    3.*   4./   *********\n");
//	printf("****     0.exit     *********\n");
//	printf("*****************************\n");
//}
//void Calc(int(*pf)(int,int))//pf接收函数地址
//{
//	int x = 0;
//	int y = 0; 
//	printf("请输入两个操作数:");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			Calc(Add);//传函数地址
//			break;
//		case 2:
//			Calc(Sub);//传函数地址
//			break;
//		case 3:
//			Calc(Mul);//传函数地址
//			break;
//		case 4:
//			Calc(Div);//传函数地址
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while(input);
//	system("pause");
//	return 0;
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;//取出数组的地址
//	int(*pf)(int,int);//pf是一个函数指针
//	int (*pfArr[4])(int,int);//pfArr是一个数组-函数指针的数组
//	int(*(*ppfArr)[4])(int,int) = &pfArr;//指向函数指针数组的指针
//	//ppfArr是一个指针数组，指针指向的数组有4个元素
//	//指向数组的每个元素的类型是一个函数指针 int(*)(int,int)为类型
//	return 0;
//}
//void print(char*str)
//{
//	printf("hehe:%s",str);
//}
//void test(void(*p)(char*))//函数指针接收,p指向print函数
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);//传函数地址
//	return 0;
//}
//void bubble_sort(int arr[],int sz)	
//{
//	int i = 0;
//	for(i=0;i<sz-1;i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		//第一趟:9对；第二趟:8对...
//		for(j=0;j<sz-1-i;j++)//一趟有多少对
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct Stu s[3] = {{"zhangsan",20},{"lisi",30},{"wwangwu",10}};//结构体数组
//}
//void qsort( void *base, 
//	        size_t num, 
//			size_t width, 
//			int (*compare)(const void *e1, const void *e2 ) 
//			);
//#include<stdlib.h>
//int cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1-*(int*)e2;//(int*)把e1,e2地址转换为整型地址
//}
//void test1()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int cmp_float(const void* e1,const void* e2)
//{
//	return *(float*)e1-*(float*)e2;//(int*)把e1,e2地址转换为整型地址
//}
//void test2()
//{
//	float f[] = {4.2,2.2,4,3,6.1,5.4};
//	int sz = sizeof(f)/sizeof(f[0]);
//	int i = 0;
//	qsort(f,sz,sizeof(f[0]),cmp_float);
//	for(i=0;i<sz;i++)
//	{
//		printf("%.1f ",f[i]);
//	}
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age ;
};
int cmp_age(const void*e1,const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//((struct Stu*)e1)->age,((struct Stu*)e2)->age都为值
}
int cmp_name(const void*e1,const void*e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用>=<来比较，应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = {{"zz",20},{"rr",30},{"ww",10}};
	int sz = sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_age);
}
void test4()
{
	struct Stu s[3] = {{"zz",20},{"rr",30},{"ww",10}};
	int sz = sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_name);
}
int main()
{
	test3();
	test4();
	return 0;
}
