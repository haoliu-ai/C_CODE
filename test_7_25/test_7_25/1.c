#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;//十六进制，一位等于四个二进制位，共有16个二进制位，两个字节
//	//0x 00 00 12 34 整型
//	unsigned char b = *(unsigned char*)&a;//访问一个字节
//	return 0;
//}
//int main()
//{
//	char a[1000] = {0};
//	int i = 0;
//	for(i=0;i<1000;i++)
//	{
//		a[i] = -1-i;
//	}
//	printf("%d\n",strlen(a));//255
//	return 0;
//}
////杨辉三角
///*			     1
//				1 1
//			   1 2 1
//			  1 3 3 1
//			 1 4 6 4 1
//			...........
//*/
////上面两个数相加等于下面中间的数
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<10;j++)
//		{
//			if(j==0)
//			{
//				arr[i][j] = 1;
//			}
//			if(i==j)
//			{
//				arr[i][j] = 1;
//			}
//			if(i>=2 && j>=1)
//			{
//				arr[i][j] = arr[i-1][j]+arr[i-1][j-1]; 
//			}
//		}
//	}
//	打印
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
////猜凶手，凶手为四个中的一个
////A说：不是我   killer != 'A'
////B说：是C      killer == 'C'
////C说：是D      killer == 'D'
////D说：C在胡说  killer != 'D
////已知三个人说了真话，一个人说的是假话 -- 真为1，假为0。所以满足条件时值为3
//int main()
//{
//	int killer = 0;
//	for(killer='A';killer<='D';killer++)
//	{
//		if((killer != 'A')+(killer == 'C')+(killer == 'D')+(killer != 'D') == 3)
//		{
//			printf("凶手是：%c\n",killer);
//		}
//	}
//	system("pause");
//	return 0;
//}