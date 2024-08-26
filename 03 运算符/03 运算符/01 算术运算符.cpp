//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main(){
//
//	//加减乘除
//	int a1 = 10;
//	int b1 = 3;
//	cout << a1+b1 << endl;
//	cout << a1-b1 << endl;
//	cout << a1*b1 << endl;
//	cout << a1/b1 << endl; //两个整数相除，结果依然是整数，将小数部分去掉
//
//	//两个小数可以相除
//	double d1 = 0.5;
//	double d2 = 0.22;
//	cout << d1/d2 << endl; //运算的结果也可以是小数
//
//	//取模运算本质就是求余数
//	int aa = 10;
//	int bb = 3;
//	cout << aa%bb << endl;
//
//	float f1 = 3.14f;
//	float f2 = 1.11f;
//	//cout << f1%f2 << endl; //两个小数不能做取模运算
//
//	//1、前置递增
//	int a = 10;
//	++a;//让变量+1
//	cout << a << endl;
//
//	//2、后置递增
//	int b = 10;
//	b++;//让变量+1
//	cout << b << endl;
//
//	//3、前置和后置的区别
//	//前置递增，先让变量+1，然后进行表达式运算
//	int a2 = 10;
//	int b2 = ++a2*10;
//	cout << a2 << endl;
//	cout << b2 << endl;
//
//	//后置递增，先进行表达式运算，后让变量+1
//	int a3 = 10;
//	int b3 = a3++*10;
//	cout << a3 << endl;
//	cout << b3 << endl;
//
//	system("pause");
//	return 0;
//}