#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[10]={0};
//	a[4]=10;//a��4Ϊ������
//	return 0;
//}
//int get_max(int x,int y)//�������Ǻ������ò�����
//{
//	return x>y?x:y;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	//���ú�����ʱ�򣨣����Ǻ������ò�����
//	int max=get_max(a,b);//��������ʵ��Ϊ������ 
//	printf("max=%d\n",max);
//	return 0;
//}
//ѧ��
struct Stu//����һ���ṹ������--struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
	struct Stu s1={"����",20,"20190305"};
	struct Stu* ps=&s1;
	printf("%s\n,ps->name");
	printf("%d\n",ps->age);
	//�ṹ��ָ��->��Ա��
	/*printf("%s\n,(*ps).name");
	printf("%d\n",(*ps).age);*/
	/*printf("%s\n",s1.name);
	printf("%d\n",s1.age);
	printf("%s\n",s1.id);*/
	//�ṹ�����.��Ա��
	return 0;
}
//int main()
//{
//	char a=3;
//	//00000000000000000000000000000011
//	//00000011 - a //���νضϣ�charռһ���ֽ�
//	char b=127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	char c=a+b;
//	//��������
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010 - c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//00000000000000000000000001111110 - ԭ��
//	//-126
//	printf("%d\n",c);
//	return 0;
//}
//int main()
//{
//	char a=0xb6;//b6=10110110,a=01001010
//	short b=0xb600;
//	int c=0xb6000000;
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//	printf("\n%d",a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char c=1;
//	printf("%u\n",sizeof(c));//1
//	printf("%u\n",sizeof(+c));//�������������Ϊ4
//	printf("%u\n",sizeof(!c));//4
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b+a*3;
//	return 0;
//}