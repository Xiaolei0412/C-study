/*
	非静态成员变量占对象空间
	静态成员变量不占对象空间
	函数也不占对象空间，所有函数共享一个函数实例
	静态成员函数也不占对象空间
*/

#include<iostream>
using namespace std;
#include<string>

class person
{
public:
	//静态成员函数；
	static void func1()
	{
		p_name = 100;  //静态成员可以访问静态成员变量；
		//pp = name;  静态成员函数不可以访问非静态成员变量
		cout << "static void func1() 的静态成员函数调用；" << endl;
	}
	static int p_name;   //类内声明 类外必须初始化一下；

	//int pp;
private:
	static void func2()
	{
		cout << "static void func2() 的静态成员函数调用；" << endl;
	}
};

int person::p_name = 0;  //类内声明 类外必须初始化一下；

void test01()
{
	person p;
	p.func1();

	//通过类名进行访问
	person::func1();

	//类外访问不到私有静态函数；
	//person::func2();  不可访问
}

int main()
{
	test01();


	system("pause");
	return 0;
}
/*
程序输出：
static void func1() 的静态成员函数调用；
static void func1() 的静态成员函数调用；
*/