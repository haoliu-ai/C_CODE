#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ʵ��
////ʵ��һ
////ʵ�ִ��룺��1!+2!+3!+...+n!;���������
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
//		for(j=1;j<=i;j++)//�ڴ˴����öϵ㣬������������ٰ�F5�����ɿ����������������������
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
//	for(i=0;i<=12;i++)//Խ�����
//	{
//		printf("hehe\n");//��ͬ�������ڴ沼�ֲ�ͬ��������ѭ����������ͬ
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
////ģ��ʵ�ֿ⺯��strcpy
//#include<assert.h>
//char* my_strcpy(char* arr1,const char* arr2)//*arr2���ܱ��ı�
//{
//	/*while(*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1=*arr2;//��ʱ��arr1��arr2��Ӧ��ֵΪ'\0'*/
//	////�Ż�
//	//if(arr1 != NULL && arr2 != NULL)//ȷ����������ָ�벻Ϊ�գ���ֻ����˴���û�з�������
//	//{
//	//	while(*arr1++ = *arr2++)
//	//	{
//	//		;
//	//	}
//	//}
//	//���Ż�
//	char* ret = arr1;
//	assert(arr1 != NULL);//����,���ʽ���Ϊ�棬ʲô�������������Ϊ��,�ͻᱨ��
//	assert(arr2 != NULL);
//	//��arr2ָ����ַ���������arr1ָ��Ŀռ�,����'\0'�ַ�
//	while(*arr1++ = *arr2++)//���д��*arr2++ = *arr1++�ͻᱨ��,��Ϊ*arr2�ǲ��ܱ��ı��
//	{
//		; 
//	}
//	return ret;//����Ŀ�ĵص���ʼ��ַ�����ֻ����arr1�����ص���Ŀ�ĵصĽ�β��ַ,û������Ҳ������Ҫ��
//	//���ֱ�ӷ���arr1,���ص��ǡ�#####��
//}
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//	printf("%s\n",my_strcpy(arr1,arr2));//��ʽ����:��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	const int* p = &num;//const����ָ�����*���ʱ�����ε���*p������ͨ��p���ı�*p(num)��ֵ
///*  int* const p = &num;//const����ָ�����*�ұ�ʱ�����ε���ָ�����p����*p(num)���Ըı䣬p�����Ըı�
//	*p = 20;  */  
//	const int* const p = &num;//�����ܱ�
//	int n = 20;
//	p = &n;
//	return 0;
//}
////ģ��ʵ�ֿ⺯��strlen
//#include<assert.h>
//int my_strlen(const char *arr)
//{
//	int count = 0;
//	assert(arr != NULL);//��ָ֤�����Ч��
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
	int sum = Add(a,b);//δ����Add,�޷��������ⲿ����_Add,�÷����ں���_main �б�����
	printf("%d\n",sum);
	return 0;
}