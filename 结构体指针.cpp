

#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name; //名字
	int age;   //年龄
	int score;  //分数
};

int main()
{
	//创建学生结构体变量
	student stu = { "李东岳",18,30 };

	//通过指针指向结构体变量；
	student *p = &stu;

	//利用指针访问结构体成员；
	//通过结构体指针，访问结构体成员需要利用‘->’来访问，
	cout << "姓名：" << p->name<<endl << "年龄：" << p->age <<endl<< "分数：" << p->score << endl;

	system("pause");
	return 0;
}