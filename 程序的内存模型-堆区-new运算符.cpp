/*
	堆区：
	由程序员分配释放, 若程序员不释放, 程序结束时由操作系统回收
	在C++中主要利用new在堆区开辟内存

	【new 操作符】
	C++中利用==new==操作符在堆区开辟数据
​	堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符 ==delete==

​	语法:new 数据类型
​	利用new创建的数据，会返回该数据对应的类型的指针

*/

#include<iostream>
using namespace std;

//new 的基本与法
int *func()
{
	//在堆区建立整型数据
	//指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区。
	int *p = new int(10);
	return p;
}
void test01()
{
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//在堆区建立整型数据
	//由delete释放
	delete p;
	//cout << *p << endl;  //此段数据不会运行；

}

//在堆区利用new来创建数组；
void test02()
{
	int *arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组
	//释放的时候 要加[]
	delete[] arr;

}


int main()
{

	cout << "test01=" << endl;
	test01();
	cout << "test02=" << endl;
	test02();


	int *p = func();
	cout << *p << endl;

	system("pause");
	return 0;
}
/*
程序输出：
test01=
10
10
10
10
test02=
1
2
3
4
5
6
7
8
9
10
10
*/
