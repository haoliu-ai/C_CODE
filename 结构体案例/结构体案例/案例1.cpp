//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//
////设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员，学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值，最终打印出老师数据以及老师所带学生数据
//
//struct student
//{
//	string name;
//	int score;
//};
//struct teacher
//{
//	string name;
//	struct student s[5];
//};
//
////给老师和学生赋值的函数
//void allocateSpace(struct teacher tArray[],int len)
//{
//	string nameseed = "ABCDE";
//	//给老师赋值
//	for(int i=0;i<len;i++)
//	{
//		tArray[i].name = "teacher_";
//		tArray[i].name += nameseed[i];
//		//通过循环给每名老师带的学生赋值
//		for(int j=0;j<5;j++)
//		{
//			tArray[i].s[j].name = "student_";
//			tArray[i].s[j].name += nameseed[j];
//
//			int random = rand()%61+40;
//			tArray[i].s[j].score = random;
//
//		}
//	}
//}
//
////打印所有信息
//void print(struct teacher tArray[],int len)
//{
//	for(int i=0;i<len;i++)
//	{
//		cout << "老师姓名： " << tArray[i].name << endl;
//		for(int j=0;j<5;j++)
//		{
//			cout << "\t学生姓名:" << tArray[i].s[j].name << "     考试分数:" << tArray[i].s[j].score << endl;
//		}
//	}
//}
//
//int main(){
//	
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	//1、创建3名老师的数组
//	struct teacher tArray[3];
//
//	//2、通过函数给3名老师的信息赋值，并给老师带的学生赋值
//	int len = sizeof(tArray)/sizeof(tArray[0]);
//	allocateSpace(tArray,len);
//
//	//3、打印所有老师及所带学生的信息
//	print(tArray,len);
//
//	system("pause");
//	return 0;
//}