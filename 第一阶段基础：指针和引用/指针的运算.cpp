/* .....
	空指针用于给指针变量进行初始化，不可以进行访问
	int *p=NULL;
.......*/


//输入两个整数，用指针将它们从大到小的顺序输出；
#include<iostream>
using namespace std;
int main()
{
	int a, b, t;
	int *p = &a, *q = &b;

	cout << "请输入两个数：" << endl;
	cin >> a >> b;

	if (a < b)
	{
		t = *p;       //交换值
		*p = *q;
		*q = t;
	}

	cout << "交换后的数字为：" << endl;
	cout << a << "\t" << b << endl;
	cout << *p << "\t" << *q << endl;

	system("pause");
	return 0;
}

//-------------赋值运算------------//
/*
	int c = 16,d = 20; 
	float x = 26.4f, y = 56.2f;
	int *pc, *pd = &d; // 使pb指向变量b；
	float *px, *py = NULL; //使py的值为0；
	px = &x; //使指针px指向变量x；
	pc = pd; //两个指针变量赋值相等，并使他们指向同一个内存单元；
	*/

 //-------------算数运算------------//
int x, y, *p = &y; 
x = *p++; //x=*(p++),x的值就是y;
x = *++p;//x=*(++p),先进行自增运算，再进行赋值运算；
x == (*p)++;// 就是y++；
x = ++(*p); //就是y+1