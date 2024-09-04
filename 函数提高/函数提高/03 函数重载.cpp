//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
////函数重载
//
////函数重载的满足条件
////1、同一个作用域下
////2、函数名称相同
////3、函数参数类型不同，或者个数不同，或者顺序不同
//void func()
//{
//	cout << "111" << endl;
//}
//
//void func(int a)
//{
//	cout << "222" << endl;
//}
//
//void func(double a)
//{
//	cout << "333" << endl;
//}
//
//void func(int a,double b)
//{
//	cout << "444" << endl;
//}
//
//void func(double a,int b)
//{
//	cout << "555" << endl;
//}
//
////注意事项
////函数的返回值不可以作为函数重载的条件
////int func(double a,int b)
////{
////	cout << "555" << endl;
////}
//
//int main(){
//
//	func(10,3.14);
//
//	system("pause");
//	return 0;
//}