#include<iostream>
using namespace std;

// 4.2.2 构造函数的分类及调用
//两种分类方式：
//按参数分为： 有参构造和无参构造
//按类型分为： 普通构造和拷贝构造
class person
{
public:
	//无参构造函数；
	person()
	{
		cout << "无参构造函数；" << endl;
	}
	//有参构造函数；
	person(int a)
	{
		age = a;
		cout<< "有参构造函数；" << endl;
	}
	//拷贝构造函数
	person(const person &p)
	{
		int age;
		age = p.age;
		cout << "拷贝构造函数；" << endl;
	}

	//析构函数
	~person()
	{
		cout << "无参构造函数；" << endl;
	}

	int age;
};

//三种调用方式：
//括号法
//显示法
//隐式转换法
void test01()  //无参函数的调用；
{
	person p;
}
//有参函数的调用
void test02()
{
	//1.括号法；
	//person p2(2);
	//person p1(p2);//拷贝构造
	////注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明

	//2. 显式法
	person p2 = person(10);
	person p3 = person(p2);
	//Person(10)单独写就是匿名对象  当前行结束之后，马上析构

	//2.3 隐式转换法
	person p4 = 10; // person p4 = person(10); 
	person p5 = p4; // person p5 = person(p4); 

	//注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
	//person p5(p4);
}

int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}