//成员属性私有化
//将所有成员属性设置为私有，可以自己控制读写权限
//对于写权限，我们可以检测数据的有效性
#include<iostream>
using namespace std;
#include<string>

class person
{
public:
	//设置姓名
	void setname(string name)
	{
		s_name = name;
	}
	//获取姓名
	string getname()
	{
		return s_name;
	}
	//设置年龄；可读可写；
	void setage(int age)
	{
		if (age < 0 || age > 150) 
		{
			cout << "你个老妖精!" << endl;
			return;
		}
		s_age = age;

	}
	//获取年龄
	int getage()
	{
		return s_age;
	}
	//情人设置为只写；
	void setlover(string lover)
	{
		s_lover = lover;
	}

private:
	//姓名 可读可写；
	string s_name;
	int s_age;  //只读
	string s_lover;

};

int main()
{
	person per;
	//给name赋值.
	per.setname( "李东岳");
	cout << "\t名字:" << per.getname() << endl;

	//给age赋值
	per.setage(2000);
	cout << "\t年龄:" << per.getage() << endl;

	//给lover赋值；
	per.setlover("苍老师");
	//cout << "\t情人:" << per.s_lover << endl; 只读属性 不可以访问；

	system("pause");
	return 0; 
}