#include<iostream>
//#include<windows>
using namespace std;
struct student
{
	char name[10];
	char sex[5];
	char jiguan[10];
	int age, nub;
	char adr[20];
}stu[100];
int main()
{
	int i, j, n;
	cout << "欢迎使用学生信息管理系统" << endl;
	cout << "请输入要添加学生的个数" << endl;
	cin >> n;
	if (n >= 100 || n <= 0)
	{
		cout << "系统错误，请重新输入" << endl;
		exit(0);
	}
	else 
	{
		for (i = 1; i <= n; i++)
		{
			cout << "请输入姓名 性别 籍贯 年龄 学号 住址：" << endl;
			cin >> stu[i].name >> stu[i].sex >> stu[i].jiguan  >>
			stu[i].age >> stu[i].nub >> stu[i].adr;
		}
	cout << "当前学生信息如下" << endl;
	cout << "姓名   性别    籍贯    年龄    学号    住址" << endl;
	for (j = 1; j <= n; j++)
	{
		cout << j << stu[j].name << "	   " << stu[j].sex << "	   " << 
		stu[j].jiguan << "	   " << stu[j].age << "	   " << stu[j].nub << "	   " << stu[j].adr << endl;
	}
	}
	system("pause");
	return 0;
}

