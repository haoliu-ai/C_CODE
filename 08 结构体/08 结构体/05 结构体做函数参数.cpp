//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//#include<string>
//
////定义学生结构体
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////打印
////1、值传递
//void print1(struct student s)
//{
//	cout << s.name << " " << s.age << " " << s.score << endl;
//}
//
////2、址传递
//void print2(struct student* p)
//{
//	cout << p->name << " " << p->age << " " << p->score << endl;
//}
//
//int main(){
//
//	//将学生传入到一个参数中，打印学生的所有信息
//
//	//创建学生结构体变量
//	struct student s;
//	s.name = "张三";
//	s.age = 20;
//	s.score = 85;
//
//	print1(s);
//	print2(&s);
//
//	system("pause");
//	return 0;
//}