//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
////静态成员变量
//class Person
//{
//public:
//	static int m_A; // 类内声明
//
//private:
//	static int m_B; //静态成员变量也是有访问权限的
//};
//
//int Person::m_A = 100; // 类外初始化
//int Person::m_B = 200;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	p.m_A = 200;
//	cout << p.m_A << endl; // 所有对象共享同一份数据
//}
//
//void test02()
//{
//	//静态成员变量不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//
//	//1、通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//
//	//2、通过类名进行访问
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl; 类外访问不到私有静态成员变量
//}
//
//int main(){
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}