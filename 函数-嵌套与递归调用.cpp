/*
	1.函数的嵌套： 编写一个求三个数中最大数和最小数差值的程序。
	//如果函数不需要返回值，声明的时候可以写void..

*/

#include<iostream>
using namespace std;

int max(int x, int y, int z)    //计算三个数中的最大值
{
	int s;
	s = x > y ? x : y;
	return(s > z ? s : z);
}
int min(int x, int y, int z)    //计算三个数中的最大值
{
	int t;
	t = x < y ? x : y;
	return(t < z ? t : z);
}
int dif(int x, int y, int z)   //最大值减去最小值
{
	int sub;
	sub = max(x, y, z) - min(x, y, z);
	return sub;      //调用函数时必须有返回值；
}
int main()
{
	int a, b, c;
	cout << "请输入三个数：" << endl;
	cin >> a >> b >> c;

	
	cout << "最大的数减去最小的数为：" << dif(a,b,c) << endl;

	system("pause");
	return 0;
}