#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//1、设计英雄结构体
struct hero
{
	string name;
	int age;
	string sex;
};

int main(){

	//设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄。通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
	
	//2、创建数组存放5名英雄
	struct hero hArray[] = {{"刘备",23,"男"},{"关羽",22,"男"},{"张飞",20,"男"},{"赵云",21,"男"},{"貂蝉",19,"女"}};
	int sz = sizeof(hArray)/sizeof(hArray[0]);

	//3、对数组进行排序，按照年龄进行升序排序
	for(int i=0;i<sz-1;i++)
	{
		for(int j=0;j<sz-1-i;j++)
		{
			if(hArray[j].age > hArray[j+1].age)
			{
				struct hero tmp = hArray[j];
				hArray[j] = hArray[j+1];
				hArray[j+1] = tmp;
			}
		}
	}

	//4、打印
	for(int i=0;i<sz;i++)
	{
		cout << "姓名：" << hArray[i].name << "   " << "年龄：" << hArray[i].age << "   " << "性别：" << hArray[i].sex << endl;
	}
	system("pause");
	return 0;
}