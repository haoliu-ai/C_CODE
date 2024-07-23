#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//二维数组
//	int a[3][4] = {0};
//	printf("%d\n",sizeof(a));//48
//	printf("%d\n",sizeof(a[0][0])) ;//4
//	printf("%d\n",sizeof(a[0]));//16
//	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//	printf("%d\n",sizeof(a[0]+1));//4
//	//a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实就是第一行第一个元素的地址,所以a[0]+1就是第一行第二个元素的地址
//	printf("%d\n",sizeof(*(a[0]+1)));//4
//	printf("%d\n",sizeof(a+1));//4
//	//a是二维数组的数组名,没有sizeof(数组名),也没有&(数组名),所以a是首元素的地址,而把二维数组看成一维数组时，二维数组的首元素是他的第一行,a就是第一行(首元素)的地址,a+1就是第二行的地址
//	printf("%d\n",sizeof(*(a+1)));//16
//	printf("%d\n",sizeof(&a[0]+1));//4
//	//第二行的地址，&a[0]为第一行的地址
//	printf("%d\n",sizeof(*(&a[0]+1)));//16
//	printf("%d\n",sizeof(*a));//16
//	printf("%d\n",sizeof(a[3]));//16
//	system("pause");
//	return 0;
//}
////指针笔试题
//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int* ptr = (int*)(&a+1);
//	printf("%d,%d",*(a+1),*(ptr-1));//2,5
//	system("pause");
//	return 0;
//}
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p的值为0x100000。如下表达式的值分别是多少
//已知结构体Test类型的变量大小是二十个字节
int main()
{
	p = (struct Test*)0x100000;//强制转换为结构体类型
	printf("%p\n",p+0x1);//结构体指针+1跳过一个结构体，0x1就是1,0x100000+20 
	//00100014
	printf("%p\n",(unsigned long)p+0x1);//00100001
	printf("%p\n",(unsigned int*)p+0x1);//00100004 无符号整型为4个字节
	system("pause");
	return 0;
}