#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////������
////5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
////A˵��B�ڶ����ҵ���
////B˵���ҵڶ���E����
////C˵���ҵ�һ��D�ڶ�
////D˵��C����ҵ���
////E˵���ҵ��ģ�A��һ
////����������ÿλѡ�ֶ�˵����һ�룬����ȷ����������
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
//						if(((B==2)+(A==3)==1)&&((B==2)+(E==4)==1)&&((C==1)+(D==2)==1)&&((C==5)+(D==3)==1)&&((E==4)+(A==1)==1))//����һ��˵�� -- ֵ���Ϊ1
//						{
//							if(A*B*C*D*E == 120)//��֤�������һ�������� 1*2*3*4*5=120 
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
////�ַ���������ʵ��һ�����������������ַ����е�k���ַ�
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
//#include<string.h>
//#include<assert.h>
//////������ⷨ
////void move(char ch[],int k)
////{
////	int i = 0;
////	int len = strlen(ch);
////	assert(ch!=NULL);
////	for(i=0;i<k;i++)//��Ҫ��ת����
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
////������ת��
////abcdef
////ba fedc -- ����ab��������cdef
////cdefab -- �ٽ�bafedc��������
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
//	reverse(ch,ch+k-1);//�������
//	reverse(ch+k,ch+len-1);//�����ұ�
//	reverse(ch,ch+len-1);//��������
//}
//int main()
//{
//	char ch[] = "abcd";//�����޸�,�������ַ�ָ��
//	int k = 0; 
//	scanf("%d",&k);
//	move(ch,k);
//	printf("%s\n",ch);
//	system("pause");
//	return 0;
//}
////�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�������������
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
//void move(char*ch,int k)//��ch������תk���ַ�
//{
//	int len = strlen(ch);
//	assert(ch);//��ֹchΪNULL
//	assert(k<=len);//��ֹ��ת���������ַ����ܳ���
//	reverse(ch,ch+k-1);//�������
//	reverse(ch+k,ch+len-1);//�����ұ�
//	reverse(ch,ch+len-1);//��������
//}
//int is_same(char* arr1,char* arr2)//����1
//{
//	int len = strlen(arr1);
//	int i = 0;
//	int ret = 0;
//	for(i=0;i<len;i++)
//	{
//		move(arr1,1);//��arr1������ת1���ַ�
//		//���ܽ�1���i����Ϊÿ����ת�꣬�ַ������ݶ���ı�
//		ret = strcmp(arr1,arr2);
//		if(ret == 0)
//			return 1;
//	}
//	//��������
//	return 0;
//}
////-->��
////strcat->char *strcat( char *strDestination, const char *strSource );
////strncat->char *strncat( char *strDest, const char *strSource, size_t count );
//int is_same(char* str1,char* str2)//����2
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	char* ret = 0;
//	if(len1 != len2)//�ж������ַ��������Ƿ����
//		return 0;
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	strncat(str1,str1,len1);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
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
//���Ͼ�����һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N) => ���������ά����ΪO(N) 
int Findnum(int arr[3][3],int k,int* px,int* py)
{
	int x = 0;
	int y =*py-1;
	while(y>=0 && x<=*px-1)
	{
		if(arr[x][y]>k)//���ұ�һ��û��
		{
			y--;//��С����0
		}
		else if(arr[x][y]<k)//������һ��û��
		{
			x++;//���С��row-1
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//�Ҳ���
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
	ret = Findnum(arr,k,&x,&y);//&���ĵ�ַ���������У���������ֵ�ı仯��ı�˴���ֵ
	//����1�ҵ�������0�Ҳ���
	if(ret==1)
	{
		printf("�ҵ���,�±�Ϊ��%d %d\n",x,y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	system("pause");
	return 0;
}