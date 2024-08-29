#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//封装一个函数，利用冒泡排序，实现对整型数组的升序排序

//冒泡排序函数
void bubbleSort(int* arr,int sz)
{
	for(int i=0;i<sz-1;i++)
	{
		for(int j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(){

	//1、先创建数组
	int arr[] = {4,3,6,9,1,2,10,8,7,5};
	int sz = sizeof(arr)/sizeof(arr[0]);

	//2、创建函数，实现冒泡排序函数
	bubbleSort(arr,sz);

	//3、打印
	for(int i=0;i<sz;i++)
	{
		cout << arr[i] << " ";
	}


	system("pause");
	return 0;
}