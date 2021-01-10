/*
	非静态成员变量占对象空间
	静态成员变量不占对象空间
	函数也不占对象空间，所有函数共享一个函数实例
	静态成员函数也不占对象空间

	C++中成员变量和成员函数是分开存储的
	每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
	那么问题是：这一块代码是如何区分那个对象调用自己的呢？

	this指针是隐含每一个非静态成员函数内的一种指针
	this指针不需要定义，直接使用即可

	this指针的用途：
*  当形参和成员变量同名时，可用this指针来区分
*  在类的非静态成员函数中返回对象本身，可使用return *this
*/
#include<iostream>
using namespace std;
#include<string>

class person
{
public:
	person(int age)
	{   //this 指针指向的是被调用的成员函数所属的对象；

		this->age = age;
	}

	//------------把person 传进去----------//
	person& addperson(person &p)
	{
		this->age += p.age;
	//-----------返回对象本身-------------//
		return *this;
	}

	void ShowClassName() 
	{
		cout << "我是Person类!" << endl;
	}

	//---------空指针访问成员函数------------//
	void ShowPerson() 
	{
		if (this == NULL) 
		{             //空指针可以访问成员函数；
			return;
		}
		cout << mage << endl;
	}

	int age;
	int mage;
};

void test01()
{
	person p1(10);
	cout << "P1 =" << p1.age << endl;
}
//返回对象本身用 *this；
void test02()
{
	person p1(10);
	person p2(15);
	p2.addperson(p1).addperson(p1);
	//----输出年龄-----//
    //-----链式编程思想--------//
	cout << "addperson P2 " <<  p2.age  << endl;   

}
void test03()
{
	person * p = NULL;
	p->ShowClassName(); //空指针，可以调用成员函数
	p->ShowPerson();  //但是如果成员函数中用到了this指针，就不可以了
}
int main()
{

	test01();
	test02();
	test03();
	system("pause");
	return 0;
}
/*
程序输出：
P1 =10
addperson P2 35
我是Person类!
*/
