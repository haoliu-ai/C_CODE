#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[4] = {1,2,3,4};//01000000 02000000 03000000 04000000С�˴洢
//	int *ptr1 = (int*)(&a+1);
//	int *ptr2 = (int*)((int)a+1);//01000000=>(int)a:1
//	printf("%x,%x",ptr1[-1],*ptr2);//00000004=>4;02000000ʮ�����ƴ�ӡ0����ʡ��=>2000000 *ptr2�������ĸ��ֽ�
//	return 0; 
//}
//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};//{1,3,5}
//	int *p;
//	p = a[0];//a[0][0]��ַ��ŵ�p��
//	printf("%d",p[0]);//p[0]��Ԫ�ص�ַ=>��һ�е�һ��Ԫ��
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[5][5];//���������� ���������� ���������� ���������� ����������
//	int(*p)[4];
//	p = a;//int(*)[4] ..... int(*)[5],����Ԫ�ص�ַ����p
//	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);//FFFFFFFC,-4
//	//p[4][2]=>a[4][4]������ָ��+1���������Ӧ�Ĵ�С
//	//p[4][2]->(*(p+4)+2),*(p+4)->p[4][2],*(p+4)+2->p[4][2]+2->a[4][4]
//	//&p[4][2]-&a[4][2] = -4
//	///%p -4
//	//1000000000000000000000000000000000000000000000000000000000000100 - ԭ��
//	//1111111111111111111111111111111111111111111111111111111111111011 - ����
//	//1111111111111111111111111111111111111111111111111111111111111100 - ����
//	//FFFFFFFC
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
//	int* ptr1 = (int*)(&aa+1);//(&aa+1)����ָ��
//	int* ptr2 = (int*)(*(aa+1));
//	printf("%d,%d",*(ptr1-1),*(ptr2-1));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* a[] = {"work","at","alibaba"};//�ַ�ָ������
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
//	printf("%s\n",*--*++cpp+3);//���ϸ����ʽ���� ���ټ�,��c+2����������
//	//ִ��˳��:*++cpp -> *-- -> +3
//	//--*++cpp => ��*++cppֵ-1 => c+1-1 => c
//	//*--*++cpp => ��c������,�õ�E => +3�õ�E��ʼ�ĵ�ַ => ��ӡER,����\0ֹͣ
//	printf("%s\n",*cpp[-2]+3); 
//	//�̳�������ʽ����,*++cpp��*--,ָ��Ŀռ䲢û�иı䣬����c+1�Ŀռ�
//	//*cpp[-2]+3 => **(cpp-2)+3 -> c+3�Ŀռ�������ν������ҵ�F,�ټ�3�õ�S,��ӡST,����\0ֹͣ
//	printf("%s\n",cpp[-1][-1]+1);
//	//cpp[-1][-1]+1 => *(*(cpp-1)-1)+1
//	//cppָ��Ŀռ�Ϊc+1,cpp-2��δ�ı�ָ��ռ�
//	//*(cpp-1)-1 -> c+1
//	system("pause");
//	return 0;
//}
////��ҵ
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
////дһ������,��������һ���ַ���������
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
////������ͣ���Sn=a+aa+aaa+aaaa+aaaaa������֮�ͣ�����a��һ������
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
////��ӡ�����������0-100000֮���������������������������ָһ��nλ�������λ���ֵ�n�η�֮�����õ��ڸ�������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for(i=0;i<=100000;i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.����i��λ�� - nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp/=10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		while(tmp)
//		{
//			sum += (int)pow((float)(tmp%10),n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i == sum
//		if(i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	system("pause");
//	return 0;
//}
////��ӡ����
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
//	struct S a,*p = &a;//struct S *��ɽṹ��ָ�룬pΪָ�������aΪ�ṹ�����
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
////����ˮ���� 
////1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
//int main()
//{
//	int money = 0;
//	int total = 0;//�ܼƺȵ���ˮ
//	int empty = 0;
//	scanf("%d",&money);
//	////���������ˮ�ȵ�
//	//total = money;//��Ǯ��������ˮ
//	//empty = money;//������Ǯ��������ˮʣ�µĿ�ƿ
//	////����������ˮ
//	//while(empty>=2)
//	//{
//	//	total += empty/2;
//	//	empty = empty/2 +empty%2;//��ƿ��Ϊ����ʱ
//	//}
//	if(money == 0)
//		total = 0;
//	else
//		total = 2*money-1;
//	printf("%d\n",total);
//	system("pause");
//	return 0;
//}
//��������ż��˳��
//��������ʹ����ȫ��λ��ż��ǰ��
void move(int *p,int sz)
{
	int left = 0;
	int right = sz-1;
	while(left<right)
	{
		//�������ż��
		while((left<right) && ((*(p+left))%2 == 1))
		{
			left++;//left<right - ��ֹȫ������������leftԽ��
		}
		//���ұ�������
		while((left<right) && ((*(p+right))%2 == 0))
		{
			right--;//left<right - ��ֹȫ��ż��������rightԽ��
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