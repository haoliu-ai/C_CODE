#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main(){
	//Âß¼­ÔËËã·û
	
	// !
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	// &&
	int b = 0;
	cout << (a&&b) << endl;

	// ||
	int c = 0;
	cout << (a||c) << endl;

	system("pause");
	return 0;
}