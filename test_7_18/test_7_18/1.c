#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��������ʾ��ʽ:(-1)^S*M*2^E    (MΪ1.xxx)
//���ڴ��еĴ洢��ʽΪS E+�м�ֵ M(����1���洢)
//�洢ʱ����λ����0
//int main()
//{
//	int n = 9;
//	float *pFloat = (float* )&n;
//	//9
//	//00000000000000000000000000001001 - ����9���ڴ��еĴ洢
//	//0 00000000 00000000000000000001001
//	//(-1)^0*0.00000000000000000001001*2^(-126)-ת��Ϊ������
//	printf("n��ֵΪ��%d\n",n);
//	printf("*pFloat��ֵΪ��%f\n",*pFloat);
//	*pFloat = 9.0;
//	//1001.0
//	//(-1)^0*1.001*2^3
//	//0 10000010 00100000000000000000000 - float�����ڴ��еĴ洢��ʽ
//	printf("num��ֵΪ��%d\n",n);
//	//%d��Ϊ�����ڴ��д洢���ǲ���
//	//01000001000100000000000000000000 - ����˲���
//	//�ڰ�ԭ���Ӧ��ֵ��ʾ
//	printf("*pFloat��ֵΪ��%f\n",*pFloat);
//	system("pause");
//	return 0;
//}
////0.5 -> 0.1(��ѧ������ -- �����Ƶı�ʾ��ʽ)1Ϊ1*2^(-1)
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0*1.011*2^2//2^2����С���������λ
//	//S=0
//	//M=1.011
//	//E=2
//  //S E+�м�ֵ M(��һλ��1���ڴ��в���ţ����С��λ)
//	//0 2+127 011(float�Ͳ���23λ�����油0)
//	//0 10000001 01100000000000000000000 - ���������ڴ��еĴ洢�Ķ����Ʊ�ʾ��ʽ
//	//0x40b00000  - ���������ڴ��еĴ洢��ʮ�����Ʊ�ʾ��ʽ
//	return 0;
//}
//void test(int arr[])
//{
//	int sz = sizeof(arr)/sizeof(arr[0]);//sizeof(arr)Ϊָ���С
//	printf("%d\n",sz);
//}
//int main()
//{
//	int arr[10]={0};
//	test(arr);//���鴫�δ�������Ԫ�صĵ�ַ
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
//	char* p = "abcdef";//"abcdef"��һ�������ַ���,p�д����a�ĵ�ַ
//   // *p = 'w';//����,�����ַ������ܱ��ı�
//	printf("%s\n",p);//��ӡabcdef
//	printf("%c\n",*p);//��ӡa
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if(arr1==arr2)//�жϵ�����Ԫ�ص�ַ�Ƿ���ͬ
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if(p1==p2)//p1��p2ָ��ĵ�ַ��ͬ,���ǳ����ַ�������ͬ,û�б�Ҫ������
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
//	int arr[10] = {0};//��������
//	char ch[5] = {0};//�ַ�����
//	int* parr[4];//�������ָ�������-ָ������
//	char* pch[5];//����ַ�ָ�������-ָ������
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
//	for(i=0;i<3;i++)//�ҵ�����������׵�ַ
//	{
//		int j = 0;
//		for(j=0;j<5;j++)//�����ҵ�������������׵�ַ��ӡ��ÿ����ַ�е�Ԫ��
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
//	//int* p = NULL;//p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	//char*pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	////����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	//arr - ��Ԫ�صĵ�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//�˴�intΪ����
//	int (*p)[10] = &arr;//pΪ����ָ��
//	return 0;
//}
//int main()
//{
//	char* arr[5];//�ַ�ָ��,����Ϊchar*
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
//	//����ӡ1 2 3 4 5 6 7 8 9 10
//	system("pause");
//	return 0;
//}
int main()
//�������������ʽ
void print1(int arr[3][5],int x,int y)
{
	int i = 0;
	int j = 0;
	//��i,j���������ÿ��Ԫ��
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
//������ָ�����ʽ
void print2(int(*p)[5],int x,int y)//������ָ�����{1,2,3,4,5}�ĵ�ַ
{
	int i = 0;
	for(i=0;i<x;i++)
	{
		int j = 0;
		for(j=0;j<y;j++)
		{
			//printf("%d ",*(*(p+i)+j));//p+iΪ��
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
	print2(arr,3,5);//��������Ԫ�صĵ�ַ����arr�����һά���飬��{1,2,3,4,5}���ɵ�һ��Ԫ��
	system("pause");
	return 0;
}