#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
//void Calc(int(*pf)(int,int))//pf���պ�����ַ
//{
//	int x = 0;
//	int y = 0; 
//	printf("����������������:");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			Calc(Add);//��������ַ
//			break;
//		case 2:
//			Calc(Sub);//��������ַ
//			break;
//		case 3:
//			Calc(Mul);//��������ַ
//			break;
//		case 4:
//			Calc(Div);//��������ַ
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
//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int(*pf)(int,int);//pf��һ������ָ��
//	int (*pfArr[4])(int,int);//pfArr��һ������-����ָ�������
//	int(*(*ppfArr)[4])(int,int) = &pfArr;//ָ����ָ�������ָ��
//	//ppfArr��һ��ָ�����飬ָ��ָ���������4��Ԫ��
//	//ָ�������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)Ϊ����
//	return 0;
//}
//void print(char*str)
//{
//	printf("hehe:%s",str);
//}
//void test(void(*p)(char*))//����ָ�����,pָ��print����
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);//��������ַ
//	return 0;
//}
//void bubble_sort(int arr[],int sz)	
//{
//	int i = 0;
//	for(i=0;i<sz-1;i++)
//	{
//		//һ��ð������
//		int j = 0;
//		//��һ��:9�ԣ��ڶ���:8��...
//		for(j=0;j<sz-1-i;j++)//һ���ж��ٶ�
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct Stu s[3] = {{"zhangsan",20},{"lisi",30},{"wwangwu",10}};//�ṹ������
//}
//void qsort( void *base, 
//	        size_t num, 
//			size_t width, 
//			int (*compare)(const void *e1, const void *e2 ) 
//			);
//#include<stdlib.h>
//int cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1-*(int*)e2;//(int*)��e1,e2��ַת��Ϊ���͵�ַ
//}
//void test1()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int cmp_float(const void* e1,const void* e2)
//{
//	return *(float*)e1-*(float*)e2;//(int*)��e1,e2��ַת��Ϊ���͵�ַ
//}
//void test2()
//{
//	float f[] = {4.2,2.2,4,3,6.1,5.4};
//	int sz = sizeof(f)/sizeof(f[0]);
//	int i = 0;
//	qsort(f,sz,sizeof(f[0]),cmp_float);
//	for(i=0;i<sz;i++)
//	{
//		printf("%.1f ",f[i]);
//	}
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age ;
};
int cmp_age(const void*e1,const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//((struct Stu*)e1)->age,((struct Stu*)e2)->age��Ϊֵ
}
int cmp_name(const void*e1,const void*e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����>=<���Ƚϣ�Ӧ����strcmp����
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = {{"zz",20},{"rr",30},{"ww",10}};
	int sz = sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_age);
}
void test4()
{
	struct Stu s[3] = {{"zz",20},{"rr",30},{"ww",10}};
	int sz = sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_name);
}
int main()
{
	test3();
	test4();
	return 0;
}
