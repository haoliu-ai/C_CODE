#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//函数重载的注意事项
//1、引用作为重载的条件
void func(int &a)
{
	cout << "111" << endl;
}

void func(const int &a)
{
	cout << "222" << endl;
}

//2、函数重载碰到默认参数
void func2(int a)
{
	cout << "333" << endl; 
}

void func2(int a,int b = 10)
{
	cout << "444" << endl; 
}

int main(){
	
	int a = 10;
	func(a);
	func(10);
	//func2(1); 当函数重载碰到默认参数，出现二义性，报错
	system("pause");
	return 0;
}