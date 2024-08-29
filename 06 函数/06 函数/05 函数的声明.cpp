#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//函数的声明
//声明可以有多次，定义只能有一次
int max(int a,int b);

int main(){

	int a = 10;
	int b = 20;

	cout << max(a,b) << endl;

	system("pause");
	return 0;
}

//定义函数
int max(int a,int b)
{
	return a>b?a:b;
}
