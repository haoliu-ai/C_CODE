#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//浮点数表示形式:(-1)^S*M*2^E    (M为1.xxx)
//在内存中的存储形式为S E+中间值 M(整数1不存储)
//存储时不满位数补0
//int main()
//{
//	int n = 9;
//	float *pFloat = (float* )&n;
//	//9
//	//00000000000000000000000000001001 - 整型9在内存中的存储
//	//0 00000000 00000000000000000001001
//	//(-1)^0*0.00000000000000000001001*2^(-126)-转换为浮点型
//	printf("n的值为：%d\n",n);
//	printf("*pFloat的值为：%f\n",*pFloat);
//	*pFloat = 9.0;
//	//1001.0
//	//(-1)^0*1.001*2^3
//	//0 10000010 00100000000000000000000 - float型在内存中的存储形式
//	printf("num的值为：%d\n",n);
//	//%d认为它在内存中存储的是补码
//	//01000001000100000000000000000000 - 变成了补码
//	//在按原码对应的值表示
//	printf("*pFloat的值为：%f\n",*pFloat);
//	system("pause");
//	return 0;
//}
////0.5 -> 0.1(科学计数法 -- 二进制的表示形式)1为1*2^(-1)
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0*1.011*2^2//2^2代表小数点后移两位
//	//S=0
//	//M=1.011
//	//E=2
//  //S E+中间值 M(第一位的1在内存中不存放，存放小数位)
//	//0 2+127 011(float型不足23位，后面补0)
//	//0 10000001 01100000000000000000000 - 浮点型在内存中的存储的二进制表示形式
//	//0x40b00000  - 浮点型在内存中的存储的十六进制表示形式
//	return 0;
//}
//void test(int arr[])
//{
//	int sz = sizeof(arr)/sizeof(arr[0]);//sizeof(arr)为指针大小
//	printf("%d\n",sz);
//}
//int main()
//{
//	int arr[10]={0};
//	test(arr);//数组传参传的是首元素的地址
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	*pc = 'w';
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串,p中存的是a的地址
//   // *p = 'w';//错误,常量字符串不能被改变
//	printf("%s\n",p);//打印abcdef
//	printf("%c\n",*p);//打印a
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if(arr1==arr2)//判断的是首元素地址是否相同
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if(p1==p2)//p1和p2指向的地址相同,都是常量字符串且相同,没有必要存两份
//	{
//		printf("hehe\n");
//	}
//	else 
//	{
//		printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};//整型数组
//	char ch[5] = {0};//字符数组
//	int* parr[4];//存放整型指针的数组-指针数组
//	char* pch[5];//存放字符指针的数组-指针数组
//	return 0;
//}
//int main()
//{
//	int a = 10,b=20,c=30,d=40;
//	int* arr[4] = {&a,&b,&c,&d};
//	int i = 0;
//	for(i=0;i<4;i++)
//	{
//		printf("%d ",*(arr[i]));
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
	//int arr1[] = {1,2,3,4,5};
	//int arr2[] = {2,3,4,5,6};
	//int arr3[] = {3,4,5,6,7};
	//int* parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for(i=0;i<3;i++)//找到三个数组的首地址
//	{
//		int j = 0;
//		for(j=0;j<5;j++)//根据找到的三个数组的首地址打印出每个地址中的元素
//		{
//			printf("%d ",*(parr[i]+j));
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int* p = NULL;//p是整型指针 - 指向整型的指针 - 可以存放整型的地址
//	//char*pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	////数组指针 - 指向数组的指针 - 存放数组的地址
//	//arr - 首元素的地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//此处int为类型
//	int (*p)[10] = &arr;//p为数组指针
//	return 0;
//}
//int main()
//{
//	char* arr[5];//字符指针,类型为char*
//	char*(*pa)[5] = &arr;
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",(*pa)[i]);//*pa == arr
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(*pa+i));	//*pa == arr
//	}
//	//都打印1 2 3 4 5 6 7 8 9 10
//	system("pause");
//	return 0;
//}
int main()
//参数是数组的形式
void print1(int arr[3][5],int x,int y)
{
	int i = 0;
	int j = 0;
	//用i,j遍历数组的每个元素
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
//参数是指针的形式
void print2(int(*p)[5],int x,int y)//用数组指针接收{1,2,3,4,5}的地址
{
	int i = 0;
	for(i=0;i<x;i++)
	{
		int j = 0;
		for(j=0;j<y;j++)
		{
			//printf("%d ",*(*(p+i)+j));//p+i为行
			//printf("%d ",(*(p+i))[j]);
			//printf("%d ",*(p[i]+j));
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);
	print2(arr,3,5);//传的是首元素的地址，把arr想象成一维数组，把{1,2,3,4,5}看成第一个元素
	system("pause");
	return 0;
}