/*
结构体案例
案例1
案例描述:
学校正在做毕设项目，每名老师带领2个学生,总共有2名老师，需求如下
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名、考试分数，创建数组存放2名老师，通过函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带的学生数据。
*/

#include <iostream>
using namespace std;
#include <string>
#include <ctime>
//1.定义学生结构体
struct student
{
	//姓名
	string name;
	//考试分数
	float score;
};
//2.定义老师结构体
struct teacher
{
	string name;
	student s[5];
};
//定义输入老师和学生数据的函数
void write(teacher t[], int n)
{
		for (int i = 0; i < 2; i++)
		{
			cout << "教师姓名：";
			cin>>t[i].name;
			for (int j = 0; j < 2; j++)
			{
				cout << "学生姓名：";
				cin >> t[i].s[j].name;

				cout << "学生成绩：";
				cin>>t[i].s[j].score ;
			}
		}	
}
//定义（打印）输出老师和学生数据的函数
void printf(teacher t[], int len)
{
	for (int i = 0; i < 2; i++)
	{
		cout << "老师姓名：" << t[i].name << endl;
		for (int j = 0; j < 2; j++)
		{
			cout <<"	学生姓名："<< t[i].s[j].name <<"	学生的成绩为："<< t[i].s[j].score<< endl;
		}
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建数组存放3名老师
	struct teacher t[2];
	//计算数组长度
	//int len = sizeof(t) / sizeof(t[0]);
	//调用赋值函数
	write(t,2);

	cout << "您输出的结果为：" << endl;
	//调用输出函数
	printf(t,2);

	system("pause");
	return 0;
}