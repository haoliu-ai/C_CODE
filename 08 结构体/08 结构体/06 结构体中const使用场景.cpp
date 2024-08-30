#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//const使用场景

struct student 
{
	string name;
	int age;
	int score;
};

void print(const student* p)
{
	//p->age = 22;
	cout << p->name << " " << p->age << " " << p->score << endl;
}
int main(){

	struct student s = {"张三",15,70};

	print(&s);

	system("pause");
	return 0;
}