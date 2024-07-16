#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a=-5;
//	int b=a<<1;
//	int c=a>>1;
//	printf("%d\n",b);
//	printf("%d\n",c);
//	system("pause");
//	return 0;
//}
////求一个整数存储在内存中的二进制中1的个数 
//int main()
//{
//	int num;
//	int count=0;
//	int i=0;
//	scanf("%d",&num);
//	//统计num的补码（存储在内存中存储的是补码）中有几个1
//	/*//不适用于负数
//	while(num)
//	{
//		if(num%2==1)//二进制
//			count++;
//		num=num/2;//去掉最后一位
//	}*/
//	//num&1==1 --> num最后一位为1
	/*for(i=0;i<32;i++)
	{
		if(1==((num>>i)&1))
			count++;
	}*/
//	printf("%d\n",count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a=10;
//	char c='r';
//	char* p=&c;
//	int arr[10]={};
//	sizeof("%d\n",sizeof a);
//	sizeof("%d\n",sizeof(int));//sizeof后面如果是类型，不能省略括号
//
//	sizeof("%d\n",sizeof c);
//	sizeof("%d\n",sizeof(char));
//
//	sizeof("%d\n",sizeof p);
//	sizeof("%d\n",sizeof(char*));
//
//	sizeof("%d\n",sizeof arr);
//	sizeof("%d\n",sizeof(int[10]));
//}
//int main()
//{
//	short s=0;
//	int a=10;
//	printf("%d\n",sizeof(s=a+5));//2,s为短整型，占两个字节
//	printf("%d\n",s);//0
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a=0;
//	//~按（2进制）位取反
//	//000000000000000000000000
//	//111111111111111111111111 - 补码
//	//111111111111111111111110 - 反码
//	//100000000000000000000001 - 原码
//	printf("%d\n",~a);//-1
//	return 0;
//}
//int main()
//{
//	int a=11;
//	a=a&(~(1<<2));
//	printf("%d\n",a);
//	system("pause");  
//	return 0;
//}
//void test1(int arr[])//用指针来接收数组首元素的地址,而指针占4个字节
//{
//	printf("%d\n",sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n",sizeof(ch));//4
//}
//int main()
//{
//	int arr[10]={};
//	char ch[10]={};
//	printf("%d\n",sizeof(arr));//40
//	printf("%d\n",sizeof(ch));//10
//	test1(arr);//数组传参传的是首元素的地址
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int i=0,a=0,b=2,c=3,d=4;
//	//i=a++&&++b&&d++;//a已经为假，后面则不执行
//	i=a++||++b||d++;//如果a为真，后面不执行
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//1，2，3，4
//	system("pause");
//	return 0;
//}