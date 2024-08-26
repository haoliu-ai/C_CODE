#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main(){

	//1、创建三只小猪的体重变量
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2、让用户输入三只小猪的重量
	cout << "请输入小猪A,B,C的体重:" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	cout << "小猪A的体重为:" << num1 << endl;
	cout << "小猪B的体重为:" << num2 << endl;
	cout << "小猪C的体重为:" << num3 << endl;

	//3、判断哪只最重
	if(num1>num2)
	{
		if(num1>num3)
		{
			cout << "小猪A最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}
	else
	{
		if(num2>num3)
		{
			cout << "小猪B最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}
	system("pause");
	return 0;
}