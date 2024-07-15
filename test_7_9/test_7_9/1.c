#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[10]={0};
//	a[4]=10;//a和4为操作数
//	return 0;
//}
//int get_max(int x,int y)//（）不是函数调用操作符
//{
//	return x>y?x:y;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	//调用函数的时候（）就是函数调用操作符
//	int max=get_max(a,b);//函数名和实参为操作数 
//	printf("max=%d\n",max);
//	return 0;
//}
//学生
struct Stu//创建一个结构体类型--struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
	struct Stu s1={"张三",20,"20190305"};
	struct Stu* ps=&s1;
	printf("%s\n,ps->name");
	printf("%d\n",ps->age);
	//结构体指针->成员名
	/*printf("%s\n,(*ps).name");
	printf("%d\n",(*ps).age);*/
	/*printf("%s\n",s1.name);
	printf("%d\n",s1.age);
	printf("%s\n",s1.id);*/
	//结构体变量.成员名
	return 0;
}
//int main()
//{
//	char a=3;
//	//00000000000000000000000000000011
//	//00000011 - a //整形截断，char占一个字节
//	char b=127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	char c=a+b;
//	//整形提升
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//00000000000000000000000001111110 - 原码
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
//	printf("%u\n",sizeof(+c));//整形提升，结果为4
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