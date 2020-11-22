//

#include<iostream>
using namespace std;
int main()
{
	//先定义一个结构体变量；
	struct student
	{
		char num[10], name[20];
		char sex;  //性别
		int age;
		float score;
	}; //st1,st2 也可以直接在后面定义 
	
	struct student st1;

	cout << "请输入编号，姓名，性别，年龄，分数" << endl;
	//st1. 为访问数组元素
	cin >> st1.num >> st1.name >> st1.sex >> st1.age >> st1.score;  

	cout << "编号  姓名  性别  年龄  分数"<<endl;
	cout << st1.num << "	" << st1.name << "	" << st1.sex << "	" << st1.age << "	" << st1.score << endl;

	system("pause");
	return 0;
}