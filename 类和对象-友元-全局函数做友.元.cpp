/*
	生活中你的家有客厅(Public)，有你的卧室(Private)
	客厅所有来的客人都可以进去，但是你的卧室是私有的，也就是说只有你能进去
	但是呢，你也可以允许你的好闺蜜好朋友进去。
	在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
	友元的目的就是让一个函数或者类 访问另一个类中私有成员

	友元的关键字为  ==friend==
	友元的三种实现
   * 全局函数做友元
   * 类做友元
   * 成员函数做友元

*/

#include<iostream>
using namespace std;
#include<string>
//先定义一个客厅的类；
class room
{
	//告诉编译器 goodfrieng全局函数 是room类的好朋友，可以访问类中的私有内容;
	friend	void  goodfriend(room *room);
public:
	room()
	{
		r_settingroom = "客厅";
		r_badroom = "卧室";
	}
public:
	string r_settingroom; //客厅；

private:
	string r_badroom; //卧室；
};
//全局函数作友元；
void  goodfriend(room *room)
{
	cout << "好朋友想访问你的：" << room->r_settingroom << endl;

	cout << "好朋友想访问你的：" << room->r_badroom << endl;
}
//传值；
void test01()
{
	room roomm;
	goodfriend(&roomm); //指针要把地址传进去；

}
int main()
{
	test01();
	system("pause");
	return 0;
}
/*
程序输出：
好朋友想访问你的：客厅
好朋友想访问你的：卧室
*/
