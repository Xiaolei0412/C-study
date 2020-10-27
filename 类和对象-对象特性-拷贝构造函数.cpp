#include<iostream>
using namespace std;
//*使用一个已经创建完毕的对象来初始化一个新对象
//*值传递的方式给函数参数传值
//*以值方式返回局部对象
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
	person p1(2);
	person p2(p1);
}
//*值传递的方式给函数参数传值 相当于person p1 = p
void work(person p1)
{
}
void test02()
{
	person p;
	work(p);
}
//*以值方式返回局部对象
person doWork2()
{
	person p1;
	cout << (int *)&p1 << endl;
	return p1;
}

void test03()
{
	person p = doWork2();
	cout << (int *)&p << endl;
}


int main()
{
	cout << "tese 01" << endl;
	test01();

	cout << "tese 02" << endl;
	test02();

	cout << "tese 03" << endl;
	test03();
	system("pause");
	return 0;
}
/*
程序输出：
tese 01
有参构造函数调用
拷贝构造函数调用！
析构函数调用调用！
析构函数调用调用！
tese 02
无参构造函数调用!
拷贝构造函数调用！
析构函数调用调用！
析构函数调用调用！
tese 03
无参构造函数调用!
007DF768
拷贝构造函数调用！
析构函数调用调用！
007DF860
*/