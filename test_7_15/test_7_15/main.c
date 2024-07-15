#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=0;i<100;i++)
//	{
//		printf("%d ",i);
//	}
//	for(i=0;i<100;i++)
//	{
//		printf("%d ",10-i);
//	}
//	return 0;
//}
int Add(int x,int y)
{
	return x+y;
}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int c = Add(a,b);
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	{
//		int tmp = 0;
//		printf("tmp = %d\n",tmp);
//	}
//	for(i=0;i<10;i++)
//	{
//		arr[i] = i;
// 	}
//	return 0;
//}
void test2()
{
	printf("hehe\n");
}
void test1()
{
	test2();
}
void test()
{
	test1();
}
int main()
{
	test();
	return 0;
}