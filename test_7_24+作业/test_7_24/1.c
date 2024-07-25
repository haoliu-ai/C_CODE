#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[4] = {1,2,3,4};//01000000 02000000 03000000 04000000小端存储
//	int *ptr1 = (int*)(&a+1);
//	int *ptr2 = (int*)((int)a+1);//01000000=>(int)a:1
//	printf("%x,%x",ptr1[-1],*ptr2);//00000004=>4;02000000十六进制打印0可以省略=>2000000 *ptr2向后访问四个字节
//	return 0; 
//}
//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};//{1,3,5}
//	int *p;
//	p = a[0];//a[0][0]地址存放到p中
//	printf("%d",p[0]);//p[0]首元素地址=>第一行第一个元素
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[5][5];//□□□□□ □□□□□ □□□□□ □□□□□ □□□□□
//	int(*p)[4];
//	p = a;//int(*)[4] ..... int(*)[5],将首元素地址赋给p
//	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);//FFFFFFFC,-4
//	//p[4][2]=>a[4][4]，数组指针+1跳过数组对应的大小
//	//p[4][2]->(*(p+4)+2),*(p+4)->p[4][2],*(p+4)+2->p[4][2]+2->a[4][4]
//	//&p[4][2]-&a[4][2] = -4
//	///%p -4
//	//1000000000000000000000000000000000000000000000000000000000000100 - 原码
//	//1111111111111111111111111111111111111111111111111111111111111011 - 反码
//	//1111111111111111111111111111111111111111111111111111111111111100 - 补码
//	//FFFFFFFC
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
//	int* ptr1 = (int*)(&aa+1);//(&aa+1)数组指针
//	int* ptr2 = (int*)(*(aa+1));
//	printf("%d,%d",*(ptr1-1),*(ptr2-1));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* a[] = {"work","at","alibaba"};//字符指针数组
//	char**pa = a;
//	pa++;
//	printf("%s\n",*pa);//at
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* c[] = {"ENTER","NEW","POINT","FIRST"};
//	char** cp[] = {c+3,c+2,c+1,c};
//	char*** cpp = cp; 
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n",*--*++cpp+3);//在上个表达式基础 上再加,即c+2基础上运算
//	//执行顺序:*++cpp -> *-- -> +3
//	//--*++cpp => 将*++cpp值-1 => c+1-1 => c
//	//*--*++cpp => 将c解引用,得到E => +3得到E开始的地址 => 打印ER,遇到\0停止
//	printf("%s\n",*cpp[-2]+3); 
//	//继承上面表达式运算,*++cpp再*--,指向的空间并没有改变，还是c+1的空间
//	//*cpp[-2]+3 => **(cpp-2)+3 -> c+3的空间进行两次解引用找到F,再加3得到S,打印ST,遇到\0停止
//	printf("%s\n",cpp[-1][-1]+1);
//	//cpp[-1][-1]+1 => *(*(cpp-1)-1)+1
//	//cpp指向的空间为c+1,cpp-2并未改变指向空间
//	//*(cpp-1)-1 -> c+1
//	system("pause");
//	return 0;
//}
////作业
//int main()
//{
//	unsigned long pulArray[] = {6,7,8,9,10};
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr+3) += 3;
//	printf("%d,%d",*pulPtr,*(pulPtr+3));//6,12
//	system("pause");
//	return 0;
//}
////写一个函数,可以逆序一个字符串的内容
//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char*right = str+len-1;
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main() 
//{
//	char arr[256] = {0};
//	gets(arr);
//	reverse(arr);
//	printf("%s\n",arr);
//	system("pause");
//	return 0;
//}
////计算求和，求Sn=a+aa+aaa+aaaa+aaaaa的五项之和，其中a是一个数字
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int Sn = 0;
//	int i = 0;
//	int ret = 0;
//	scanf("%d%d",&a,&n);
//	for(i=0;i<n;i++)
//	{
//		ret = ret*10+a;
//		Sn += ret;
//	}
//	printf("%d\n",Sn);
//	system("pause");
//	return 0;
//}
////打印自幂数，求出0-100000之间所有自幂数并输出，自幂数是指一个n位数，其各位数字的n次方之和正好等于该数本身
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for(i=0;i<=100000;i++)
//	{
//		//判断i是否为自幂数
//		//1.计算i的位数 - n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp/=10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		while(tmp)
//		{
//			sum += (int)pow((float)(tmp%10),n);
//			tmp /= 10;
//		}
//		//3.比较i == sum
//		if(i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	system("pause");
//	return 0;
//}
////打印菱形
//#include<assert.h>
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d",&line);
//	assert(line%2 != 0);
//	for(i=0;i<=line/2;i++)
//	{
//		int j = 0;
//		for(j=0;j<line/2-i;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=0;i<line/2;i++)
//	{
//		int j = 0;
//		for(j=0;j<=i;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*(line/2-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a,*p = &a;//struct S *组成结构体指针，p为指针变量，a为结构体变量
//	a.a = 99;
//	printf("%d\n",a.a);//(p->a),(*p.a)
//	return 0;
//}
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s\n",(*p).name);//wang
//	return;
//}
//int main()
//{
//	struct stu students[3] = {{9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18}};
//	fun(students+1);
//	return 0;
//}
////喝汽水问题 
////1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;//总计喝的汽水
//	int empty = 0;
//	scanf("%d",&money);
//	////买回来的汽水喝掉
//	//total = money;//用钱买来的汽水
//	//empty = money;//喝完用钱买来的汽水剩下的空瓶
//	////换回来的汽水
//	//while(empty>=2)
//	//{
//	//	total += empty/2;
//	//	empty = empty/2 +empty%2;//空瓶变为单数时
//	//}
//	if(money == 0)
//		total = 0;
//	else
//		total = 2*money-1;
//	printf("%d\n",total);
//	system("pause");
//	return 0;
//}
//调整奇数偶数顺序
//调整数组使奇数全部位于偶数前面
void move(int *p,int sz)
{
	int left = 0;
	int right = sz-1;
	while(left<right)
	{
		//从左边找偶数
		while((left<right) && ((*(p+left))%2 == 1))
		{
			left++;//left<right - 防止全是奇数，导致left越界
		}
		//从右边找奇数
		while((left<right) && ((*(p+right))%2 == 0))
		{
			right--;//left<right - 防止全是偶数，导致right越界
		}
		if(left < right)
		{
			int tmp = *(p+left);
			*(p+left) = *(p+right);
			*(p+right) = tmp;
		}
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	move(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}