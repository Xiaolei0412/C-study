/*
	do...while语句语法格式：

	do
		<循环体语句>
	while（<表达式>）;
	(与while循环的区别在于，do...while先执行一次循环语句，再判断循环条件。

*/

// 水仙花数是一个三位数，
//利用do while 求出所有三位数中的水仙花数
#include<iostream>
using namespace std;
int main()
{
	//1.先列出所有三位数字。
	int num = 0;
	do
	{
		//从所有三位数中 找到水仙花数。 
		int a = 0; //个位
		int b = 0; //十位
		int c = 0; //百位

		a = num % 10;         //获取数字各位
		b = num / 10 % 10;    //获取数字十位
		c = num / 100;        //获取数字百位

		if (a*a*a+b*b*b+c*c*c==num)  //如果是水仙花数才打印。
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}

/*
程序输出：
0
1
153
370
371
407
*/