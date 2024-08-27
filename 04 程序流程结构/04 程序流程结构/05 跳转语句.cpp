#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main(){

	// break语句

	//1、出现在switch语句中
	cout << "请选择副本的难度" <<endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;

	int select = 0; // 创建选择结果的变量
	cin >> select; // 等待用户输入
	switch(select)
	{
	case 1:
		cout << "" << endl;
		break;
	case 2:
		cout << "" << endl;
		break;
	case 3:
		cout << "" << endl;
		break;
	default:
		cout << "" << endl;
		break;
	}

	//2、出现在循环语句中
	for(int i=0;i<10;i++)
	{
		cout << i << endl;
		if(i == 5)
		{
			break;
		}
	}

	//3、出现在嵌套循环语句中
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(j == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}

	//continue语句
	for(int i=0;i<=100;i++)
	{
		if(i/2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}

	//goto语句
	cout << "1" << endl;
	cout << "2" << endl;
	goto FLAG;
	cout << "3" << endl;
	cout << "4" << endl;
	FLAG:
	cout << "5" << endl;

	system("pause");
	return 0;
}