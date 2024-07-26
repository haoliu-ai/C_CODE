#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////猜名次
////5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
////A说：B第二，我第三
////B说：我第二，E第四
////C说：我第一，D第二
////D说：C最后，我第三
////E说：我第四，A第一
////比赛结束后，每位选手都说对了一半，请编程确定最后的名次
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for(A=1;A<=5;A++)
//	{
//		for(B=1;B<=5;B++)
//		{
//			for(C=1;C<=5;C++)
//			{
//				for(D=1;D<=5;D++)
//				{
//					for(E=1;E<=5;E++)
//					{
//						if(((B==2)+(A==3)==1)&&((B==2)+(E==4)==1)&&((C==1)+(D==2)==1)&&((C==5)+(D==3)==1)&&((E==4)+(A==1)==1))//都有一半说对 -- 值相加为1
//						{
//							if(A*B*C*D*E == 120)//保证有五个不一样的名次 1*2*3*4*5=120 
//								printf("A=%d B=%d C=%d D=%d E=%d\n",A,B,C,D,E);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
////字符串左旋：实现一个函数，可以左旋字符串中的k个字符
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
//#include<string.h>
//#include<assert.h>
//////暴力求解法
////void move(char ch[],int k)
////{
////	int i = 0;
////	int len = strlen(ch);
////	assert(ch!=NULL);
////	for(i=0;i<k;i++)//需要旋转次数
////	{
////		//1
////		char tmp = ch[0];
////		//2
////		int j = 0;
////		for(j=0;j<len-1;j++)
////		{
////			ch[j] = ch[j+1];
////		}
////		//3
////		ch[len-1] = tmp;
////	}  
////}
////三步翻转法
////abcdef
////ba fedc -- 逆序ab，再逆序cdef
////cdefab -- 再将bafedc整体逆序
//void reverse(char*left,char*right)
//{
//	assert(left!=NULL);
//	assert(right!=NULL);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void move(char*ch,int k)
//{
//	int len = strlen(ch);
//	assert(ch);
//	assert(k<=len);
//	reverse(ch,ch+k-1);//逆序左边
//	reverse(ch+k,ch+len-1);//逆序右边
//	reverse(ch,ch+len-1);//逆序整体
//}
//int main()
//{
//	char ch[] = "abcd";//可以修改,不能用字符指针
//	int k = 0; 
//	scanf("%d",&k);
//	move(ch,k);
//	printf("%s\n",ch);
//	system("pause");
//	return 0;
//}
////判断一个字符串是否为另一个字符串逆序后的内容
#include<string.h>
#include<assert.h>
//void reverse(char*left,char*right)
//{
//	assert(left!=NULL);
//	assert(right!=NULL);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void move(char*ch,int k)//把ch向左旋转k个字符
//{
//	int len = strlen(ch);
//	assert(ch);//防止ch为NULL
//	assert(k<=len);//防止旋转次数大于字符串总长度
//	reverse(ch,ch+k-1);//逆序左边
//	reverse(ch+k,ch+len-1);//逆序右边
//	reverse(ch,ch+len-1);//逆序整体
//}
//int is_same(char* arr1,char* arr2)//方法1
//{
//	int len = strlen(arr1);
//	int i = 0;
//	int ret = 0;
//	for(i=0;i<len;i++)
//	{
//		move(arr1,1);//把arr1向左旋转1个字符
//		//不能将1变成i，因为每次旋转完，字符串内容都会改变
//		ret = strcmp(arr1,arr2);
//		if(ret == 0)
//			return 1;
//	}
//	//都不满足
//	return 0;
//}
////-->简化
////strcat->char *strcat( char *strDestination, const char *strSource );
////strncat->char *strncat( char *strDest, const char *strSource, size_t count );
//int is_same(char* str1,char* str2)//方法2
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	char* ret = 0;
//	if(len1 != len2)//判断两个字符串长度是否相等
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	strncat(str1,str1,len1);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	ret = strstr(str1,str2);
//	if(ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_same(arr1,arr2);
//	if(ret==1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	system("pause");
//	return 0;
//}
//杨氏矩阵：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O(N) => 遍历这个二维数组为O(N) 
int Findnum(int arr[3][3],int k,int* px,int* py)
{
	int x = 0;
	int y =*py-1;
	while(y>=0 && x<=*px-1)
	{
		if(arr[x][y]>k)//最右边一列没有
		{
			y--;//最小大于0
		}
		else if(arr[x][y]<k)//最上面一行没有
		{
			x++;//最大小于row-1
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//找不到
	return 0;
}
int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int k = 0;
	int ret = 0;
	int x = 3;
	int y = 3;
	scanf("%d",&k);
	ret = Findnum(arr,k,&x,&y);//&数的地址传到函数中，函数体内值的变化会改变此处的值
	//返回1找到；返回0找不到
	if(ret==1)
	{
		printf("找到了,下标为：%d %d\n",x,y);
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}