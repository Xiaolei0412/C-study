/*
构造函数：主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用。
析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作。
*/

#include<iostream>
using namespace std;

//先定义一个类；
class person
{
public:
	//1. 构造函数，没有返回值也不写void
	//函数名称与类名相同
	//构造函数可以有参数，因此可以发生重载
	//程序在调用对象时候会自动调用构造，无须手动调用, 而且只会调用一次
	person()
	{
		cout << "构造函数，没有返回值也不写void" << endl;
	}


	//2. 析构函数
	//对象早在销毁前，会自动调用析构函数，而且只能调用一次；
	~person()
	{
		cout << "构造函数，没有返回值也不写void" << endl;
	}
};

void test1()
{
	person p;
}

int main()
{
	test1();
	//person p;


	system("pause");
	return 0;
}
