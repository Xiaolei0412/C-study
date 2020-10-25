//1、封装的意义
//将属性和行为作为一个整体，用来表现生活中的事物

//封装一个圆类，求圆的周长
#include<iostream>
using namespace std;
//class代表设计一个类，后面跟着的是类名
class circle
{
public:
	int r;
	double pi = 3.1415926;
	double circlezc()

	{
		//获取圆的周长
		return 2 * pi * r;
	}

};


int main()
{
	circle c1;
	c1.r = 10;
                       //返回的是2 * pi * r;
	cout << "圆的周长为" <<c1.circlezc()<< endl;


	system("pause");
	return 0;
}


//案例： 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
#include<iostream>
#include<string>
using namespace std;
//学生类
class student
{
public:
	//属性
	string s_ID;
	string s_name;
	void showstudent()
	{
		cout<< "名字:"<< s_name <<"\t学号:"<< s_ID << endl;
	}
	void setname(string name)
	{
		s_name = name;
	}
	void setID(string ID)
	{
		s_ID = ID;
	}

};


int main()
{
	student stu;
	//stu.s_name = "李东岳";
	stu.setname("李东岳");

	//stu.s_ID = 1;
	stu.setID ("20184080716");

	//显示学生信息；
	stu.showstudent();
	system("pause");
	return 0;
}
/*
程序输出：
名字:李东岳     学号:20184080716
*/