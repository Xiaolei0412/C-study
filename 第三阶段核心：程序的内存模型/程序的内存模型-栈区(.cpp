//程序运行后
/*
	栈区：
	由编译器自动分配释放, 存放函数的参数值, 局部变量等
	注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放


*/
#include<iostream>
using namespace std;

//栈区的注意事项
int* func()
{
	int a = 10;  //局部变量 存放在栈区
	return &a;   //返回局部变量的地址
}
int main()
{
	//在堆区开辟数据；
	int *p = func();

	cout << *p << endl;

	system("pause");
	return 0;
}

/*
10
*/