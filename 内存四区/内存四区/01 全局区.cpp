//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
////全局变量
//int g_a = 10;
//int g_b = 10;
//
////const修饰的全局变量 => 全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main(){
//
//	static int c_l_a = 10;
//	static int c_l_b = 10;
//
//	cout << (int)&c_l_a << endl; 
//	cout << (int)&c_l_b << endl;
//
//	//全局区
//
//	//全局变量、静态变量、常量
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//
//	//常量
//	//字符串常量
//	cout << (int)&"hello world" << endl;
//
//	//const修饰的变量
//	//const修饰的全局变量，const修饰的局部变量
//
//	cout << &c_g_a << endl; 
//	cout << &c_g_b << endl; 
//
//	//创建普通局部变量
//	int a = 10;
//	int b = 10;
//
//	cout << (int)&a << endl; 
//	cout << (int)&b << endl; 
//
//	cout << (int)&g_a << endl; 
//	cout << (int)&g_b << endl;
//
//	cout << (int)&s_a << endl; 
//	cout << (int)&s_b << endl; 
//
//	system("pause");
//	return 0;
//}