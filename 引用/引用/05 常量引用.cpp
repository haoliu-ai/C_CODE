#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//打印数据函数
void showvalue(const int &val)
{
	//val = 1000;
	cout << val <<endl;
}
int main(){

	//常量引用
	//使用场景：用来修饰形参，防止误操作

	//int &ref = 10; 引用必须引一块合法的空间

	//const int &ref = 10; //加上const之后 编译器将代码修改为int tmp = 10;const int &ref = tmp;
	////ref = 20; //加入const之后变为只读，不可以修改

	int a = 100;
	showvalue(a);

	system("pause");
	return 0;
}