/*

	构造函数调用规则如下：
	如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
	如果用户定义拷贝构造函数，c++不会再提供其他构造函数

*/

#include<iostream>
using namespace std;

class person
{
public:
	//构造一个函数；
	person()
	{
		cout << "无参构造函数调用!" << endl;
	}
	//构造一个有参函数
	person(int a)
	{
		p_age = a;
		cout << "有参构造函数调用" << endl;
	}
	//构造一个拷贝构造函数；
	person(const person&p)
	{
		p_age = p.p_age;
		cout << "拷贝构造函数调用！" << endl;
	}
	//构造析构函数；
	~person()
	{
		cout << "析构函数调用调用！" << endl;
	}
	int p_age;
};

//*--------使用一个已经创建完毕的对象来初始化一个新对象---------//
void test01()
{
	//如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
	person p1(2);
	person p2(p1);
	cout << "p2的年龄为： " << p2.p_age << endl;

}

void test02()
{
	//如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
	person p1; //此时如果用户自己没有提供默认构造，会出错
	person p2(10); //用户提供的有参
	person p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供

	//如果用户提供拷贝构造，编译器不会提供其他构造函数
	person p4; //此时如果用户自己没有提供默认构造，会出错
	person p5(10); //此时如果用户自己没有提供有参，会出错
	person p6(p5); //用户自己提供拷贝构造
}


int main()
{
	test01();

	system("pause");
	return 0;
}