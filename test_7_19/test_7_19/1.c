#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	int*p3//整型指针 - 指向整型的指针
//	char*p4//字符指针 - 指向字符的
//	数组指针 - 指向数组的
//	int arr2[5];//数组
//	int (*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//	return 0;
//}
//void test(int arr[])//[]中的参数写不写都没价值,所以可以写或不写
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//int main()
//{
//	int arr[10] = {0};
//	int* arr2[20] = {0};
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = {0};
//	test(arr);//二维数组传参
//	return 0;
//}
//void print(int *p,int sz)//指针p（*p）接收
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;//p指向arr的首元素的地址
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p,sz);//指针p传参
//	system("pause");
//	return 0;
//}
//void test1(int*p)//地址传上来，用指针接收
//{}
//void test2(char*p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;//p1指向&a
//	test1(&a);//&a或者p1
//	char ch = 'w';
//	char* p2 = &ch;//p2指向&ch
//	test2(&ch);//或者p2
//	return 0;
//}
//void test(int**ptr)
//{
//	printf("%d\n",**ptr);
//}
//int main()
//{
//	int n = 10;
//	int*p = &n;//p指向&n
//	int**pp = &p;//pp指向&p
//	test(pp);//或&p
//	return 0;
//}
//void test(int **p)
//{}
//int main()
//{
//	/*int* ptr;
//	int**pp = &ptr;
//	test(&ptr);
//	test(pp);*/
//	int*arr[10];
//	test(arr);
//	return 0;
//}
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n",test);//&函数名和函数名都是函数的地址
//	printf("%p\n",&test);
//	system("pause");
//	return 0;
//}
//int Add(int x,int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int(*p)(int,int) = Add;//&Add与Add地址相同
//	printf("%d\n",(*p)(3,4));
//	system("pause");
//	return 0;
//}
//void Print(char*str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello bit");
//	system("pause");
//	return 0;
//}
////void(*signal(int,void(*)(int)))(int)
////typedef void(*pfun_t)(int)//把void(*)(int)改成(*pfun_t)
////pfun_t signal(int,pfun_t)
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
//int main()
//{
//	//函数指针数组 - 存放函数的地址
//	int(*p[7])(int,int) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for(i=0;i<4;i++)
//	{
//		printf("%d\n",p[i](2,3));//按顺序输出四个函数所得值,*p或p都可以
//	}
//	system("pause");
//	return 0;
//}
//char* my_strcpy(char* dest,const char* src)
////写一个函数指针pf，能够指向my_strcpy
//char*(*pf)(char*,const char*) = my_strcpy;
////写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char*(*pfArr[4])(char*,const char*) = {};
////计算加减乘除
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
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//		    scanf("%d%d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//		    scanf("%d%d",&x,&y);
//			printf("%d\n",Sub(x,y));
//			break;
//		case 3:
//			printf("%d\n",Mul(x,y));
//			printf("请输入两个操作数：");
//		    scanf("%d%d",&x,&y);
//			break;
//		case 4:
//			printf("%d\n",Div(x,y));
//			printf("请输入两个操作数：");
//		    scanf("%d%d",&x,&y);
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
//简化
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x,int y)
{
	return x/y; 
}
void menu()
{
	printf("*****************************\n");
	printf("****  1.Add   2.Sub *********\n");
	printf("****  3.Mul   4.Div *********\n");
	printf("****     0.exit     *********\n");
	printf("*****************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//pfArr是一个函数指针数组
	int(*pfArr[])(int,int)={0,Add,Sub,Mul,Div};//第一个元素初始化为0,此时正好与菜单对应
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		if(input>=1 && input<=4)
		{
			printf("请输入两个操作数：");
			scanf("%d%d",&x,&y);
			ret = pfArr[input](x,y);
			printf("%d\n",ret);
		}
		else if(input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}
	}while(input);
	system("pause");
	return 0;
}