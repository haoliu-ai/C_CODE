#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main(){

	//二维数组名称用途

	//1、可以查看占用内存空间的大小
	int arr[2][3];
	cout << sizeof(arr) <<endl;
	cout << "二维数组第一行所占内存大小：" << sizeof(arr[0]) <<endl;
	cout << "二维数组一个元素所占内存大小：" << sizeof(arr[0][0]) <<endl;
	cout << "二维数组行数：" << sizeof(arr)/sizeof(arr[0]) <<endl;
	cout << "二维数组列数：" << sizeof(arr[0])/sizeof(arr[0][0]) <<endl;

	//2、可以查看二维数组的首地址
	cout << "二维数组首地址：" << arr << endl;
	cout << "二维数组第一行首地址：" << arr[0] << endl;
	cout << "二维数组第二行首地址：" << arr+1 << endl;
	cout << "二维数组第一个元素首地址：" << &arr[0][0] << endl;
	cout << "二维数组第二个元素首地址：" << arr[0]+1 << endl;

	system("pause");
	return 0;
}