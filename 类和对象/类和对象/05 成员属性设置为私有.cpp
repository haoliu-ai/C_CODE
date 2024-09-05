#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据有效性

//人类
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}

	//设置年龄
	void setAge(int age)
	{
		cin >> age;
		if(age < 0 || age > 150)
		{
			cout << "年龄输入有误，赋值失败" << endl;
			return;
		}
		int m_Age = age;
	}
	//获取年龄
	int getAge()
	{
		return m_Age;
	}
	
	//设置偶像
	void setIdol(string idol)
	{
		m_Idol = idol;
	}
private:
	string m_Name; //可读可写

	static const int m_Age = 18; //只读 可以写了

	string m_Idol; //偶像 只写
};
int main(){
	Person p;
	//姓名设置
	p.setName("张三");
	//获取姓名
	cout << "姓名：" << p.getName() << endl;

	//设置年龄
	p.setAge(22);
	//获取年龄
	cout << "年龄：" << p.getAge() << endl;

	//偶像设置
	p.setIdol("小明");
	system("pause");
	return 0;
}