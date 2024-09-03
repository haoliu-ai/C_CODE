//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////引用做函数返回值
////1、不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
////2、函数的调用可以作为左值
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
//int main(){
//
//	int &ref = test01();
//
//	cout << ref << endl;//第一次结果正确，是因为编译器做了保留
//
//	cout << ref << endl;//第二次结果错误，因为a的内存已经释放
//
//	int &ref2 = test02(); //如果函数的返回值是引用，这个函数调用可以作为左值
//	test02() = 100;
//	cout << ref2 << endl;
//
//	system("pause");
//	return 0;
//}