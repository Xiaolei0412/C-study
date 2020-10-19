//作用：将结构体作为参数像函数中传递；

#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int age;
	int sorce;
};

//声明一个学生信息的函数；//值传递
void printstudent1(student stu)
{
	stu.age = 30;
	cout << "子函数中输出：" << endl;
	cout << "姓名：" << stu.name << endl << "年龄：" << stu.age << endl << "分数：" << stu.sorce << endl;
	cout << endl;
}
//声明一个学生信息的函数；//地址传递(会改变)
void printstudent2(student *stu)
{
	stu->age = 30;
	cout << "子函数中输出：" << endl;
	cout << "姓名：" << stu->name << endl << "年龄：" << stu->age << endl << "分数：" << stu->sorce << endl;
	cout << endl;
}
int main()
{
	//创建学生结构体变量；
	student stu = { "李东岳",20,89 };

	printstudent1(stu);
	//printstudent2(&stu);
	//输出结构体中的成员名称；
	cout << "在主函数中输出结构体成员：" << endl;
	cout << "姓名：" << stu.name << endl << "年龄：" << stu.age << endl << "分数：" << stu.sorce << endl;

	system("pause");
	return 0;
}