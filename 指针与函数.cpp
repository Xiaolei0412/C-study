//利用指针做函数的参数，可以改变
//参数的传递方式；



#include<iostream>
using namespace std;
//1.值传递：如果主函数中定义了形参的值，那么相应的实参是不受影响的；
void swap1(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}
//2.地址传递：实参不会改变；
void swap2(int *p1, int *p2)
{
	int t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
	cout << "地址传递的结果为：" << endl;
	cout << "a1=" << *p1 << endl;
	cout << "b1=" << *p2 << endl;

}
//引用传递：
int main()
{
	int a = 99;
	int b = 11;
	swap1(a, b);
	swap2(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}

/*
程序输出：
x=11
y=99
地址传递的结果为：
a=11
b=99
a=11
b=99
*/

//
#include<iostream>
using namespace std;
//声明冒泡排序函数；
void sort(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t;
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

}

//也可以创建一个打印函数的数组；
void print(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}


int main()
{
	//创建一个数组；
	int arr[10] = { 12,45,78,89,56,23,14,25,36,39 };

	//求数组长度；
	int len = sizeof(arr) / sizeof(arr[0]);

	//调用函数，实现冒泡排序；
	sort(arr, len);

	//打印排序后的数组；(也可以用调用函数的形式打印)
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "用调用函数的形式输出为：" << endl;
	print(arr, len);
	system("pause");
	return 0;
}