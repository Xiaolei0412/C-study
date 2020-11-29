/*
	while语句的语法格式
	while（<表达式>）<循环语句>
*/

//输出1-9
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	while (num < 10)   //要避免死循环
	{
		cout << num << endl;
		num++;
	}
	system("pause");
	return 0;
}


/*
输出程序：
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

