#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<ctime>
int main(){
	//系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏

	//添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、系统生成随机数
	int num = rand()%100 + 1; //rand()%100生成0-99的随机数,rand()%100+1生成1-100的随机数

	//2、玩家进行猜测
	int val = 0; //玩家输入的数据
	while(1)
	{
		cin >> val;
		//3、判断玩家的猜测
		if(val>num)
		{
			cout << "猜大了" << endl;
		}
		else if(val<num)
		{
			cout << "猜小了" << endl;
		}
		else
		{
			cout << "猜对了" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}