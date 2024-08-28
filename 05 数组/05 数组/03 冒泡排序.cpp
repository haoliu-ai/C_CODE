//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main(){
//
//	//利用冒泡排序实现升序序列
//	int arr[] = {4,2,8,0,5,7,1,3,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	//总共排序轮数为 元素个数-1
//	for(int i=0;i<sz-1;i++)
//	{
//		//内层循环对比次数 = 元素个数-当前轮数-1
//		for(int j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//
//	for(int i=0;i<sz;i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}