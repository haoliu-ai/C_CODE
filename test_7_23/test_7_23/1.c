#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//��ά����
//	int a[3][4] = {0};
//	printf("%d\n",sizeof(a));//48
//	printf("%d\n",sizeof(a[0][0])) ;//4
//	printf("%d\n",sizeof(a[0]));//16
//	//sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
//	printf("%d\n",sizeof(a[0]+1));//4
//	//a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ��a[0]��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ,����a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(*(a[0]+1)));//4
//	printf("%d\n",sizeof(a+1));//4
//	//a�Ƕ�ά�����������,û��sizeof(������),Ҳû��&(������),����a����Ԫ�صĵ�ַ,���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ��,a���ǵ�һ��(��Ԫ��)�ĵ�ַ,a+1���ǵڶ��еĵ�ַ
//	printf("%d\n",sizeof(*(a+1)));//16
//	printf("%d\n",sizeof(&a[0]+1));//4
//	//�ڶ��еĵ�ַ��&a[0]Ϊ��һ�еĵ�ַ
//	printf("%d\n",sizeof(*(&a[0]+1)));//16
//	printf("%d\n",sizeof(*a));//16
//	printf("%d\n",sizeof(a[3]));//16
//	system("pause");
//	return 0;
//}
////ָ�������
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
//����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ��Ƕ���
//��֪�ṹ��Test���͵ı�����С�Ƕ�ʮ���ֽ�
int main()
{
	p = (struct Test*)0x100000;//ǿ��ת��Ϊ�ṹ������
	printf("%p\n",p+0x1);//�ṹ��ָ��+1����һ���ṹ�壬0x1����1,0x100000+20 
	//00100014
	printf("%p\n",(unsigned long)p+0x1);//00100001
	printf("%p\n",(unsigned int*)p+0x1);//00100004 �޷�������Ϊ4���ֽ�
	system("pause");
	return 0;
}