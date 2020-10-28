/*
	非静态成员变量占对象空间
	静态成员变量不占对象空间
	函数也不占对象空间，所有函数共享一个函数实例
	静态成员函数也不占对象空间
*/
#include<iostream>
using namespace std;
#include<string>
//类对象作为类成员；
//手机
class phone
{
public:
	phone(string pname)
	{
		m_pname = pname;
		cout << "phone 的构造函数调用！" << endl;
	}

	~phone()
	{
		cout << "phone 的析构函数：" << endl;
	}
	//手机品牌名称；
	string m_pname;
};

	//当类中成员是其他类对象时，我们称该成员为 对象成员
	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
	//析构顺序与构造相反
//人类
class person
{
public:
	person(string name,string pname):m_name(name),m_phone(pname)
	{
		cout << "person 的构造函数调用！" << endl;
	}

	~person()
	{
		cout << "person 的析构函数：" << endl;
	}
public:

	string m_name;

	phone m_phone;
};

void test01()
{
	person p1("李东岳", "华为");
	cout << "姓名：" << p1.m_name << "手机：" << p1.m_phone.m_pname<<endl;

}

int main()
{

	test01();
	system("pause");
	return 0;
}
/*
程序输出：
phone 的构造函数调用！
person 的构造函数调用！
姓名：李东岳手机：华为
person 的析构函数：
phone 的析构函数：
*/