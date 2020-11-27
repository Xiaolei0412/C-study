/*
    continue;
	continue只能用在循环语句中，当程序执行到该语句时，终止本次循环，开始下一次循环
*/

#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		if (i == 5) continue;  //当i=5时 结束本次循环，除了x=5其余的都可以运行。
		cout << i << endl;
	}
	system("pause");
	return 0;
}