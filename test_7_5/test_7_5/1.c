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
////��һ�������洢���ڴ��еĶ�������1�ĸ��� 
//int main()
//{
//	int num;
//	int count=0;
//	int i=0;
//	scanf("%d",&num);
//	//ͳ��num�Ĳ��루�洢���ڴ��д洢���ǲ��룩���м���1
//	/*//�������ڸ���
//	while(num)
//	{
//		if(num%2==1)//������
//			count++;
//		num=num/2;//ȥ�����һλ
//	}*/
//	//num&1==1 --> num���һλΪ1
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
//	sizeof("%d\n",sizeof(int));//sizeof������������ͣ�����ʡ������
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
//	printf("%d\n",sizeof(s=a+5));//2,sΪ�����ͣ�ռ�����ֽ�
//	printf("%d\n",s);//0
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a=0;
//	//~����2���ƣ�λȡ��
//	//000000000000000000000000
//	//111111111111111111111111 - ����
//	//111111111111111111111110 - ����
//	//100000000000000000000001 - ԭ��
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
//void test1(int arr[])//��ָ��������������Ԫ�صĵ�ַ,��ָ��ռ4���ֽ�
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
//	test1(arr);//���鴫�δ�������Ԫ�صĵ�ַ
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int i=0,a=0,b=2,c=3,d=4;
//	//i=a++&&++b&&d++;//a�Ѿ�Ϊ�٣�������ִ��
//	i=a++||++b||d++;//���aΪ�棬���治ִ��
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//1��2��3��4
//	system("pause");
//	return 0;
//}