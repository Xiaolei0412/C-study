/*
	do...while语句语法格式：

	do
		<循环体语句>
	while（<表达式>）;
	(与while循环的区别在于，do...while先执行一次循环语句，再判断循环条件。

*/

#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num <= 10);   //输出1-10的数

	system("pause");
	return 0;
}

/*
程序输出：
0
1
2
3
4
5
6
7
8
9
*/