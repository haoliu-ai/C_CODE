//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//#include<string>
//
////类对象作为类成员
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone的构造函数调用" << endl;
//		m_PName = pName;
//	}
//
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//
//	//手机品牌名称
//	string m_PName;
//};
//
//class Person
//{
//public:
//	//Phone m_Phone = pName;
//	Person(string name,string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	string m_Name;
//	Phone m_Phone;
//};
//
////当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构想反
//
//void test01()
//{
//	Person p("张三","iPhoneMAX");
//	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
//} 
//
//int main(){
//	test01();
//	system("pause");
//	return 0;
//}