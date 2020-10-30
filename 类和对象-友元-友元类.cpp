#include<iostream>
using namespace std;
#include<string>

class Room;
//先定义一个朋友的类；
class goodfriend
{
public:
	//构造函数；
	goodfriend();

	void visit();

private:
	Room * room; //维护这份房间的指针；
};
//定义一个房间的类；
class Room  //有一个构造函数 还有定义参数（房间-卧室-客厅）
{
	//告诉编译器 goodfriend 是Room 的好朋友，他可以访问Room里的所有成员；
	friend class goodfriend;
public:
	Room();

public:
	string m_settingroom;

private:
	string m_bedroom;
};

//在类外初始化 Room 和 goodfriend ； 
Room::Room()
{
	this->m_settingroom = "客厅";
	this->m_bedroom = "卧室";
}
goodfriend::goodfriend()
{
	room = new Room;
}

//定义一个显示函数；
void goodfriend::visit()
{
	cout << "你的好朋友想访问你的：" << room->m_settingroom <<endl;
	cout << "你的好朋友想访问你的：" <<  room->m_bedroom<<endl;
}


//赋值操作；
void test01()
{
	goodfriend GG;
	GG.visit();

}

int main()
{

	test01();
	system("pause");
	return 0;
}
/*
程序输出：
你的好朋友想访问你的：客厅
你的好朋友想访问你的：卧室
*/