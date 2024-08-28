#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main(){
	
	//在一个数组中记录了五只小猪的体重，如int arr[5] = {300,350,200,400,250};找出并打印最重的小猪体重
	
	//1、创建五只小猪体重
	int arr[5] = {300,350,200,400,250};

	//2、从数组中找到最大值
	int max = 0;
	for(int i=0;i<5;i++)
	{
		if(max < arr[i])
			max = arr[i];
	}

	//3、打印最大值
	cout << max << endl;
	
	system("pause");
	return 0;
}