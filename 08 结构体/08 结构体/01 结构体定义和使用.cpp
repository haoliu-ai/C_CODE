//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//#include<string>
//
////1、创建学生数据类型：学生包括（姓名，年龄，分数）
////自定义数据类型，一些类型集合组成的一个类型
//struct Student
//{
//	//成员列表
//	string name;
//	int age;
//	int score;
//}s3;
//
////2、通过学生类型创建具体学生
//
//int main(){
//	//2.1  struct Student s1;
//	//创建变量时，struct可以省略
//	Student s1;
//	//给s1属性赋值
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 100;
//	cout << "姓名:" << s1.name << " 年龄:" << s1.age << " 分数:" << s1.score << endl;
//
//    //2.2  struct Student s2 = {...};
//	Student s2 = {"李四",20,99};
//	cout << "姓名:" << s2.name << " 年龄:" << s2.age << " 分数:" << s2.score << endl;
//
//    //2.3  在定义结构体时顺便创建变量
//	s3.name = "王五";
//	s3.age = 19;
//	s3.score = 10;
//	cout << "姓名:" << s3.name << " 年龄:" << s3.age << " 分数:" << s3.score << endl;
//
//	system("pause");
//	return 0;
//}