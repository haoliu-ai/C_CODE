#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//设计联系人结构体
struct Person
{
	string m_Name;
	int  m_Sex;
	int m_Age;
	string m_Phon;
	string m_Addr;
};

//设计通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX];
	int m_Size; //通讯录中当前记录联系人个数
};

//1、添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满，如果满了就不再添加
	if(abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
	}
	else
	{
		//添加具体联系人
		
		//姓名
		string name;
		cout << "请输入姓名：";
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		cout << "请输入性别：";
		int sex = 0;
		while(true)
		{
			cin >> sex;
			if(sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}

		//年龄
		cout << "请输入年龄：";
		int age = 0;
		while(true)
		{
			cin >> age;
			if(age>0 && age<100)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}

		//电话
		string tel;
		cout << "请输入联系电话：";
		cin >> tel;
		abs->personArray[abs->m_Size].m_Phon = tel;

		//住址
		string address;
		cout << "请输入家庭住址：";
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;

		system("pause");
		system("cls"); //清屏操作
	}
}

//2、显示联系人
void showPerson(Addressbooks* abs)
{
	//判断通讯录中人数是否为0，如果为0，显示为空
	//不为0，显示记录人的信息
	if(abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for(int i=0;i<abs->m_Size;i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t" 
				 << "性别：" << (abs->personArray[i].m_Sex ? "男":"女") << "\t"
			     << "年龄：" << abs->personArray[i].m_Age << "\t"
			     << "电话：" << abs->personArray[i].m_Phon << "\t"
			     << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls"); //清屏操作
}

//菜单界面
void showmenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

int main(){

	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	int select = 0; //创建用户选择输入的变量

	while(true)
	{
		//菜单调用
		showmenu();

		cout << "请选择您要实现的功能：";

		cin >> select;

		switch(select)
		{
		case 1: //1、添加联系人
			addPerson(&abs);
			break;

		case 2: //2、显示联系人
			showPerson(&abs);
			break;

		case 3: //3、删除联系人
			break;

		case 4: //4、查找联系人
			break;

		case 5: //5、修改联系人
			break;

		case 6: //6、清空联系人
			break;

		case 0: //0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;

		default:
			break; 

		}
	}

	system("pause");
	return 0;
}
