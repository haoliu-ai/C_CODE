#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main(){

	//请声明一个五个元素的数组，并且将元素逆置

	//1、创建数组
	int arr[] = {1,3,2,5,4};

	//2、实现逆置
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	while(left<right)
	{
		int tmp = 0;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

	//3、打印逆置后的结果
	for(int i=0;i<5;i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}