#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//访问权限
//公共权限 public
//保护权限 protected
//私有权限 private

class Person
{
public:
	string name;
protected:
	string car;
private:
	int password;
protected:
	void func()
	{
		name = "张三";
		car = "拖拉机";
		password = 123456;
	}
};
int main(){
	
	Person p;
	p.name = "李四";
	//p.car = "奔驰"; 保护权限，类外不可以访问
	//p.password = 11111; 私有权限，类外不可以访问
	//p.func(); 保护权限，类外不可以访问
	system("pause");
	return 0;
}