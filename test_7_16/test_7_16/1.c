#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//调试实例
////实例一
////实现代码：求1!+2!+3!+...+n!;不考虑溢出
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for(j=1;j<=i;j++)//在此处设置断点，再添加条件，再按F5，即可快速跳到满足条件处的语句
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++)//越界访问
//	{
//		printf("hehe\n");//不同编译器内存布局不同，导致死循环的条件不同
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
////模拟实现库函数strcpy
//#include<assert.h>
//char* my_strcpy(char* arr1,const char* arr2)//*arr2不能被改变
//{
//	/*while(*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1=*arr2;//此时的arr1和arr2对应的值为'\0'*/
//	////优化
//	//if(arr1 != NULL && arr2 != NULL)//确保传过来的指针不为空，但只规避了错误，没有反馈问题
//	//{
//	//	while(*arr1++ = *arr2++)
//	//	{
//	//		;
//	//	}
//	//}
//	//再优化
//	char* ret = arr1;
//	assert(arr1 != NULL);//断言,表达式结果为真，什么都不发生。如果为假,就会报错
//	assert(arr2 != NULL);
//	//把arr2指向的字符串拷贝到arr1指向的空间,包含'\0'字符
//	while(*arr1++ = *arr2++)//如果写成*arr2++ = *arr1++就会报错,因为*arr2是不能被改变的
//	{
//		; 
//	}
//	return ret;//返回目的地的起始地址，如果只返回arr1，返回的是目的地的结尾地址,没有意义也不满足要求
//	//如果直接返回arr1,返回的是“#####”
//}
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//	printf("%s\n",my_strcpy(arr1,arr2));//链式访问:把一个函数的返回值作为另一个函数的参数
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	const int* p = &num;//const放在指针变量*左边时，修饰的是*p，不能通过p来改变*p(num)的值
///*  int* const p = &num;//const放在指针变量*右边时，修饰的是指针变量p本身，*p(num)可以改变，p不可以改变
//	*p = 20;  */  
//	const int* const p = &num;//都不能变
//	int n = 20;
//	p = &n;
//	return 0;
//}
////模拟实现库函数strlen
//#include<assert.h>
//int my_strlen(const char *arr)
//{
//	int count = 0;
//	assert(arr != NULL);//保证指针的有效性
//	while(*arr++ != '\0')
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",my_strlen(arr));
//	system("pause");
//	return 0;
//}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a,b);//未定义Add,无法解析的外部符号_Add,该符号在函数_main 中被引用
	printf("%d\n",sum);
	return 0;
}