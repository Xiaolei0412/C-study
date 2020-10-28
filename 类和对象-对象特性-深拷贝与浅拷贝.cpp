#include<iostream>
using namespace std;

//先定义一个类；
class person
{
public:
	//1. 构造函数，没有返回值也不写void
	person()
	{
		cout << "构造函数，没有返回值也不写void" << endl;
	}
	person(int a,int height)
	{
		p_age = a;
		p_height = new int(height);  //堆区的数据由程序员手动开辟数据
		cout << "有参构造函数调用" << endl;
	}

	//自己实现拷贝构造函数；
	person(const person&p)
	{
		p_age = p.p_age;

		//深拷贝操作；
		//p_height = p.p_height; 编译器默认实现的就是这行代码；
		p_height = new int(*p.p_height);

	}

	//2. 析构函数
	//对象早在销毁前，会自动调用析构函数，而且只能调用一次；
	~person()
	{
		//析构代码，将堆区开辟的数据做释放操作；
		if (p_height != NULL)
		{
			delete p_height;
		}
		cout << "构造函数，没有返回值也不写void" << endl;
	}

	int p_age;
	int *p_height;

};

void test01()
{
	person p1(10,180);
	cout << "p1的年龄为：" <<p1.p_age<<endl<<"p1的身高为："<<*p1.p_height<< endl;

	person p2(p1);
	cout << "p1的年龄为：" << p2.p_age << endl << "p1的身高为：" << *p2.p_height << endl;
}

int main()
{
	test01();
	//person p;

	system("pause");
	return 0;
}
/*
程序输出：
有参构造函数调用
p1的年龄为：10
p1的身高为：180
p1的年龄为：10
p1的身高为：180
构造函数，没有返回值也不写void
构造函数，没有返回值也不写void
*/