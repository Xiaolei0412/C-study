#include<iostream>
using namespace std;
#include<string>
class Room;
class goodfriend
{

public:
	goodfriend();

	void visit1();
	void visit2();

	Room*room;  //维护room的指针；

};
class Room
{
	//告诉编译器  goodfriend类中的visit1成员函数 是Room好朋友，可以访问私有内容
	friend void goodfriend::visit1();
public:
	Room();

public:
	string m_settingroom;

private:
	string m_bedroom;
};

Room::Room()
{
	this->m_settingroom = "客厅";
	this->m_bedroom = "卧室";
}
goodfriend::goodfriend()
{
	room = new Room;
}

void goodfriend::visit1()
{
	cout << "你的好朋友想访问你的：" << room->m_settingroom << endl;
	cout << "你的好朋友想访问你的：" << room->m_bedroom << endl;
}

void goodfriend::visit2()
{
	cout << "你的好朋友想访问你的：" << room->m_settingroom << endl;
	//cout << "你的好朋友想访问你的：" << room->m_bedroom << endl; //不可以访问了
}
void test01()
{
	goodfriend GG;
	GG.visit1();
	GG.visit2();
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
你的好朋友想访问你的：客厅
*/