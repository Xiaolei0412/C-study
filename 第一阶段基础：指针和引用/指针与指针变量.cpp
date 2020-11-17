//在32位操作系统下 ，指针只占4个空间字节大小
//在64位操作系统下 ，指针只占8个空间字节大小

/* .....
	空指针用于给指针变量进行初始化，不可以进行访问
	int *p=NULL;
.......*/ 

//指针的定义
#include<iostream>
using namespace std;
int mian()
{ 
	//1.定义指针
	int a = 10;  //整型变量
	int *p;

	//int *p = &a；   **也可以这样定义**
	//野指针 ： int *p = (int *)0x100
	//在程序中尽量避免野指针的出现 

	//指针变量指向变量a的地址
	p = &a;
	cout << "&a=" << &a<<endl;
	cout << p << endl;

	*p = 1000;  //代表解引用
	cout << "*p=" << *p << endl;

	system("pause");
	return 0;
}



//----------------const 修饰指针-----------------//
/*
	1.常量指针
	const int * p = &a; 
		* p = 20 //错误 指针指向的值不可以改变
		p = &b  //正确，指针指向可以改变
	2.指针常量
	int * const p = &a;
		* p = 20  //正确 指针指向的值可以改变
		p = &b   //错误 指针的指向不可以改变
*/
/*
#include<iostream>
using namespace std;
int mian()
{
	//1.const 修饰指针  常量指针
	int a;
	int b;

	const int * p1 = &a;
	//*p1 = 20;错误 指针指向的值不可以改变
	 p1 = &b;

	 //2.const 修饰常量 指针常量
	 int * const  p2 = &a;
	 *p2 = 100;
	 //p2 = &b; 错误 指针的指向不可以改变
	 
	 //3..const 修饰指针和常量
	 //都不可以修改了就

	system("pause");
	return 0;
}*/