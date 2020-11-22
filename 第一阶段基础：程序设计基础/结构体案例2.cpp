/*
结构体案例2
案例描述：
设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
*/
#include<iostream>
using namespace std;
#include<string>
//定义英雄的结构体
struct hero
{
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string sex;
};
//定义冒泡排序函数体
void maopao(hero h[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				struct hero temp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = temp;
			}
		}
	}
}
void printf(hero h[], int n)  //声明打印函数：
{
	for (int i = 0; i < 5; i++)
	{
		cout << "	英雄：" << h[i].name << "	年龄：" << h[i].age << "	性别：" << h[i].sex << endl;
	}
}
int main()
{
	//创建结构体数组；
	hero h[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	//输出结构体；（正常输出）
	cout << "排序前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "	英雄：" << h[i].name << "	年龄：" << h[i].age << "	性别：" << h[i].sex << endl;
	}
	//调用冒泡排序
	maopao(h, 5);
	cout << endl;
	cout << "排序后：" << endl;
	//调用输出函数
	printf(h, 5);
	system("pause");
	return 0;
}