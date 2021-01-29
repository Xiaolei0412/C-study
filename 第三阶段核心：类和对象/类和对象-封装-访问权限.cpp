//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可以访问
//私有权限  private    类内可以访问  类外不可以访问
/*
	* struct  默认权限为公共
	* class   默认权限为私有
*/

#include<iostream>
using namespace std;
class person   //默认权限为私有
{
public: //公共权限 类内可以访问  类外可以访问
	string name;
protected://保护权限 类内可以访问  类外不可以访问
	string car;
private://私有权限 类内可以访问  类外不可以访问
	int password;

protected:
	void func()
	{
		name = "张三";
		car = "拖拉机";
		password = 123456;
	}

};

int main()
{
	person p1;
	p1.name="张三";
	//p1.car ="拖拉机" ; 保护权限类外访问不到
	//p.m_Password = 123; //私有权限类外访问不到

	system("pause");
	return 0;
}