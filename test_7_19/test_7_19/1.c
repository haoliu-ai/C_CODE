#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	int*p3//����ָ�� - ָ�����͵�ָ��
//	char*p4//�ַ�ָ�� - ָ���ַ���
//	����ָ�� - ָ�������
//	int arr2[5];//����
//	int (*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
//	return 0;
//}
//void test(int arr[])//[]�еĲ���д��д��û��ֵ,���Կ���д��д
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
//	test(arr);//��ά���鴫��
//	return 0;
//}
//void print(int *p,int sz)//ָ��p��*p������
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
//	int *p = arr;//pָ��arr����Ԫ�صĵ�ַ
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p,sz);//ָ��p����
//	system("pause");
//	return 0;
//}
//void test1(int*p)//��ַ����������ָ�����
//{}
//void test2(char*p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;//p1ָ��&a
//	test1(&a);//&a����p1
//	char ch = 'w';
//	char* p2 = &ch;//p2ָ��&ch
//	test2(&ch);//����p2
//	return 0;
//}
//void test(int**ptr)
//{
//	printf("%d\n",**ptr);
//}
//int main()
//{
//	int n = 10;
//	int*p = &n;//pָ��&n
//	int**pp = &p;//ppָ��&p
//	test(pp);//��&p
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
//	printf("%p\n",test);//&�������ͺ��������Ǻ����ĵ�ַ
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
//	int(*p)(int,int) = Add;//&Add��Add��ַ��ͬ
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
////typedef void(*pfun_t)(int)//��void(*)(int)�ĳ�(*pfun_t)
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
//	//����ָ������ - ��ź����ĵ�ַ
//	int(*p[7])(int,int) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for(i=0;i<4;i++)
//	{
//		printf("%d\n",p[i](2,3));//��˳������ĸ���������ֵ,*p��p������
//	}
//	system("pause");
//	return 0;
//}
//char* my_strcpy(char* dest,const char* src)
////дһ������ָ��pf���ܹ�ָ��my_strcpy
//char*(*pf)(char*,const char*) = my_strcpy;
////дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char*(*pfArr[4])(char*,const char*) = {};
////����Ӽ��˳�
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
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			printf("������������������");
//		    scanf("%d%d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("������������������");
//		    scanf("%d%d",&x,&y);
//			printf("%d\n",Sub(x,y));
//			break;
//		case 3:
//			printf("%d\n",Mul(x,y));
//			printf("������������������");
//		    scanf("%d%d",&x,&y);
//			break;
//		case 4:
//			printf("%d\n",Div(x,y));
//			printf("������������������");
//		    scanf("%d%d",&x,&y);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while(input);
//	system("pause");
//	return 0;
//}
//��
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
	//pfArr��һ������ָ������
	int(*pfArr[])(int,int)={0,Add,Sub,Mul,Div};//��һ��Ԫ�س�ʼ��Ϊ0,��ʱ������˵���Ӧ
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		if(input>=1 && input<=4)
		{
			printf("������������������");
			scanf("%d%d",&x,&y);
			ret = pfArr[input](x,y);
			printf("%d\n",ret);
		}
		else if(input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("ѡ�����\n");
		}
	}while(input);
	system("pause");
	return 0;
}