//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
////交换函数
//
////1、值传递
//void myswap01(int a,int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////2、地址传递
//void myswap02(int* a,int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
////3、引用传递
//void myswap03(int &a,int &b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main(){
//	int a = 10;
//	int b = 20;
//
//	myswap01(a,b);
//	cout << a << " " << b << endl;
//
//	myswap02(&a,&b);
//	cout << a << " " << b << endl;
//
//	myswap03(a,b);
//	cout << a << " " << b << endl;
//
//	system("pause");
//	return 0;
//}