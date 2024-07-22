#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct Stu
//{
//char name[20];
//int age;
//};
//void Swap(char* buf1,char*buf2,int width)
//{
//int i = 0;
////交换整个数
//for(i=0;i<width;i++)
//{
//	char tmp = *buf1;
//	*buf1 = *buf2;
//	*buf2 = tmp;
//	buf1++;
//	buf2++;
//}
//}
//void bubble_sort(void* base,int sz,int width,int(*cmp)(const void*e1,const void*e2))//参数部分存放函数指针int(*cmp)(const void*e1,const void*e2)
//{
//int i = 0;
//for(i=0;i<sz-1;i++)
//{
//	int j = 0;
//	for(j=0;j<sz-1-i;j++)
//	{
//		if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)//(char*)base+j*width第一个数，(char*)base+(j+1)*width第二个数，相邻下标的数
//		{
//			//交换
//			Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
//		}
//	}
//}
//}
//int cmp_int(const void*e1,const void*e2)
//{
//return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//int arr[5] = {2,1,5,3,8};
//int sz = sizeof(arr)/sizeof(arr[0]);
//bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//int cmp_struct_age(const void*e1,const void*e2)
//{
//return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test2()
//{
//struct Stu s[3] = {{"zz",20},{"rr",30},{"ww",10}};
//int sz = sizeof(s)/sizeof(s[0]);
//bubble_sort(s,sz,sizeof(s[0]),cmp_struct_age);
//}
//int main()
//{
////test1();
//test2();
//return 0;
//}
//指针和数组笔试
//int main()
//{
//	int a[] = {1,2,3,4};
//	printf("%d\n",sizeof(a));//16
//	printf("%d\n",sizeof(a+0));//4 a+0为首元素地址；除了sizeof(数组名),&数组名,其他都为首元素地址
//	printf("%d\n",sizeof(*a));//4 
//	printf("%d\n",sizeof(a+1));//4
//	printf("%d\n",sizeof(a[1]));//4
//	printf("%d\n",sizeof(&a));//4
//	printf("%d\n",sizeof(*&a));//16
//	printf("%d\n",sizeof(&a+1));//4
//	printf("%d\n",sizeof(&a[0]));//4
//	printf("%d\n",sizeof(&a[0]+1));//4
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	/*printf("%d\n",sizeof(arr));//6
//	printf("%d\n",sizeof(arr+0));//4
//	printf("%d\n",sizeof(*arr));//1
//	printf("%d\n",sizeof(arr[1]));//1
//	printf("%d\n",sizeof(&arr));//4
//	printf("%d\n",sizeof(&arr+1));//4
//	printf("%d\n",sizeof(&arr[0]+1));//4*/
//	printf("%d\n",strlen(arr));//随机值
//	printf("%d\n",strlen(arr+0));//随机值 从首元素地址开始数
//	printf("%d\n",strlen(*arr));//错误，传的是'a'
//	printf("%d\n",strlen(arr[1]));//错误,传的是'b'
//	printf("%d\n",strlen(&arr));//随机值
//	printf("%d\n",strlen(&arr+1));//随机值-6
//	printf("%d\n",strlen(&arr[0]+1));//随机值-1
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr+0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr+1));//4
//	printf("%d\n", sizeof(&arr[0]+1));//4
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr+0));//6
//	printf("%d\n", strlen(*arr));//错误
//	printf("%d\n", strlen(arr[1]));//错误
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr+1));//随机值 不知道有没有遇到\0
//	printf("%d\n", strlen(&arr[0]+1));//5
//	return 0;
//}
int main()
{
	char *p = "abcdef";
	printf("%d\n", sizeof(p));//4   计算指针变量p的大小
	printf("%d\n", sizeof(p+1));//4  b的地址
	printf("%d\n", sizeof(*p));//1  *p就是字符串的第一个字符
	printf("%d\n", sizeof(p[0]));//1 字符a
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p+1));//4
	printf("%d\n", sizeof(&p[0]+1));//4
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p+1));//5
	printf("%d\n", strlen(*p));//错误
	printf("%d\n", strlen(p[0]));//错误
	printf("%d\n", strlen(&p));//随机值 与字符串"abcdef"无关，求的是p的地址往后数
	printf("%d\n", strlen(&p+1));//随机值
	printf("%d\n", strlen(&p[1]+1));//5
	system("pause");
	return 0;
}