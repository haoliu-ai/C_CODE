#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;//ʮ�����ƣ�һλ�����ĸ�������λ������16��������λ�������ֽ�
//	//0x 00 00 12 34 ����
//	unsigned char b = *(unsigned char*)&a;//����һ���ֽ�
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
////�������
///*			     1
//				1 1
//			   1 2 1
//			  1 3 3 1
//			 1 4 6 4 1
//			...........
//*/
////������������ӵ��������м����
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
//	��ӡ
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
////�����֣�����Ϊ�ĸ��е�һ��
////A˵��������   killer != 'A'
////B˵����C      killer == 'C'
////C˵����D      killer == 'D'
////D˵��C�ں�˵  killer != 'D
////��֪������˵���滰��һ����˵���Ǽٻ� -- ��Ϊ1����Ϊ0��������������ʱֵΪ3
//int main()
//{
//	int killer = 0;
//	for(killer='A';killer<='D';killer++)
//	{
//		if((killer != 'A')+(killer == 'C')+(killer == 'D')+(killer != 'D') == 3)
//		{
//			printf("�����ǣ�%c\n",killer);
//		}
//	}
//	system("pause");
//	return 0;
//}