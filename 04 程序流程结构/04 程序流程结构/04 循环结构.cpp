#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main(){
	//while循环
	//在屏幕中打印 0-9 10个数字
	int num = 0;
	while(num<10)
	{
		cout << num << endl;
		num++;
	}

	//do while语句
	//在屏幕中打印 0-9 10个数字
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	}while(num<10);

	system("pause");
	return 0;
}