/*# 通讯录管理系统
   （1.）、系统需求
    通讯录是一个可以记录亲人、好友信息的工具。
	【系统中需要实现的功能如下】：
	1.添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
	2.显示联系人：显示通讯录中所有联系人信息
	3.删除联系人：按照姓名进行删除指定联系人
	4.查找联系人：按照姓名查看指定联系人信息
	5.修改联系人：按照姓名重新修改指定联系人
	6.清空联系人：清空通讯录中所有信息
	0.退出通讯录：退出当前使用的通讯录

	//清屏的操作；//每一部操作完成之后都需要清屏；
	system("pause");
	system("cls");//清屏语句；
*/
#include<iostream>
using namespace std;
#include<string>
#define MAX 100
	//先展示出主菜单界面；
void Menu()
{
	cout<<endl;
	cout << "-----------【主菜单】-----------" << endl;
	cout << "---------1.添加联系人:----------"<< endl;
	cout << "---------2.显示联系人：---------" << endl;
	cout << "---------3.删除联系人：---------" << endl;
	cout << "---------4.查找联系人：---------" << endl;
	cout << "---------5.修改联系人：---------" << endl;
	cout << "---------6.清空联系人：---------" << endl;
	cout << "---------0.退出通讯录：---------" << endl;
}

//实现添加通讯录联系人的信息的结构体；（要记录有多少人在这里）
struct person 
{
	string name;//姓名
	int sex; //性别（1-男/2-女）；
	int age;  //年龄
	string phone;//手机号
	string home;//地址

};
//设计通讯录结构体；（存放成员个数，成员信息）
struct addressbook
{
	struct person personArray[MAX]; //通讯录扩展到1000；
	int size;  //当前联系人个数(后面就相当于i++)
};
//创建一个能添加联系人-的函数；
void addperson(addressbook *add)
{
	if (add->size > MAX)
	{
		cout << "这个通讯录已经满了！" << endl;
	}
	//输入通讯录成员的信息；
	else
	{
		cout << "请输入姓名" << endl;
		//姓名；输入完成后将这个名字添加到通讯录结构体中
		string name;
		cin >> name;
		add->personArray[add->size].name = name;

		//性别；
		int sex;
		cout << "请输入性别" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		cin >> sex;
		if (sex == 1 ||sex == 2)
			add->personArray[add->size].sex = sex;

		//年龄；
		int age;
		cout << "请输入年龄" << endl;
		cin >> age;
		add->personArray[add->size].age = age;

		//联系电话；
		string phone;
		cout << "请输入手机电话" << endl;
		cin >> phone;
		add->personArray[add->size].phone = phone;

		//通讯地址；
		string home;
		cout << "请输入通讯地址" << endl;
		cin >> home;
		add->personArray[add->size].home = home;

		//所有项目添加完之后要给通讯录结构体的空间加1；
		add->size++;
		cout << "添加信息成功" << endl;

		//清屏的操作；//每一部操作完成之后都需要清屏；
		system("pause");
		system("cls");//清屏语句；
	}
}

//定义显示所有联系人的函数；
void showperson(addressbook *add)
{
	//如果通讯录中没有人，则显示为空，否则执行显示联系人函数；
	if (add->size == 0)
	{
		cout << "通讯录中没有联系人，请添加联系人：" << endl;
	}
	else  //要输出多个联系人 所以要用for循环；
	{
		for (int i = 0;i<add->size;i++)
		{
			cout << "姓名：" << add->personArray[i].name << "\t性别：" << (add->personArray[i].sex == 1 ? "男" : "女") << "\t年龄" << add->personArray[i].age
				<< "\t电话：" << add->personArray[i].phone << "\t通讯地址：" << add->personArray[i].home << endl;
		}

		//清屏的操作；//每一部操作完成之后都需要清屏；
		system("pause");
		system("cls");//清屏语句；
	} 
}
//(先判断有没有这个人，要是没有就输出“查无此人！”）
int isperson(addressbook *add,string name)
{ 
	//找到你要删除的那个人；

	for (int i = 0; i < add->size; i++)
	{
		//找到输入的姓名了
		if (add->personArray[i].name == name)
		{
			return 1;
		}
		return -1;
	}


}

//定义一个删除联系人的函数；(找到人了进行数据迁移就能删除了)
void deleteperson(addressbook *add)
{
	string name;
	cout << "请输入您要删除的联系人：" << endl;
	cin >> name;
	//调用是否有该联系人的函数；
	int ret = isperson(add,name);  //在函数里调用已经定义的函数时不需要+“&”；
	if (ret != -1)
	{
		cout << "查无此人请重新输入：" << endl;
	}
	else
	{
		char anser;
		cout << "你真的确定你要删除他吗？(Y or N ?)" << endl;
		cin >> anser;
		if (anser == 'Y')
		{
			for (int i = 0; i < add->size; i++)
			{
				//-----------------数-据-前-移---------------------//
				add->personArray[i] = add->personArray[i + 1];  //将后面的联系人移动到前面就代表此联系人已经删除；
			}
			cout << "删除" << add->personArray[add->size].name << "的信息成功" << endl;
			add->size--; //更新通讯录中的人数；
		}
		else
		{
			cout << "\t那么请按任意键返回吧" << endl;
		}
	}
	//清屏的操作；//每一部操作完成之后都需要清屏；
	system("pause");
	system("cls");//清屏语句；
}

//定义一个查找联系人的函数；
void findperson(addressbook *add)
{
	cout << "请输入你要查找的联系人" << endl;
	//先判断是否有该联系人呢 调用判断联系人的函数；
	string name;
	cin >> name;
	int ret = isperson(add, name);  //在函数里调用已经定义的函数时不需要+“&”；
	if (ret != -1)
	{
		cout << "以为您查询到你要查找的联系人，请看下面" << endl;
		cout << add->personArray[ret].name << endl;
	}
	else
	{
		cout << "并没有查到你所要查询的人，请重新输入吧 *_*" << endl;
	}
	//清屏的操作；//每一部操作完成之后都需要清屏；
	system("pause");
	system("cls");//清屏语句；

}


int main()
{
	//创建通讯录结构体变量；
	struct addressbook add;

	//初始化通讯录；
	add.size = 0;

	int select = 0;
	//while 用来退出系统；
	while (true)
	{
		Menu(); //显示菜单；
		cin >> select;
		switch (select)  //选择的选项
		{
		case 1:  // 添加联系人 (调用函数addperson)
			addperson(&add);
			break;
		case 2: //显示联系人：(调用函数showperson)
			showperson(&add);  
			break;
		case 3:  //删除联系人
			deleteperson(&add);
		/* 查找是否有该联系人的功能实现；
		{
			string name;
			cout << "请输入你要删除的联系人：" << endl;
			cin >> name;
			if (isperson(&add, name) == 0)
			{
				cout << "查无此人，请重新输入" << endl;
			}
			else
			{
				cout << "找到此人，请再次确认一下是否要删除他：" << endl;
			}

		}
		*/
			break;
		case 4:  //查找联系人
			findperson(&add);
			break;
		case 5: //修改联系人
			break;
		case 6:  //清空联系人：
			break;
		case 0:  //退出通讯录
			cout << "退出通讯录" << endl<<"欢迎下次使用！"<<endl;
			break;
		default:
			break;

			system("pause");
		return 0;
		}


	}
	system("pause");
	return 0;
}