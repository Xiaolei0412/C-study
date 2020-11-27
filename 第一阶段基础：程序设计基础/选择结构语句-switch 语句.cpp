//switch语句：可以根据给定的条件，从多分支语句序列中选择执行一个分支的语句序列。
/*
	switch (表达式)
	{
		case 常量表达式1； break；
		case 常量表达式2； break；
		...
		default：
			语句序列；
	}
*/

//输入一个成绩，转换成优 良。。。
#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "输入分数：";
	cin >> score;
	if (score < 0 || score>100) 
	{
		cout << "输入错误了（只能输入100以内的数)" << endl;
		exit(1);  //成绩异常时，结束程序运行。
	}
	switch (score / 10)  //取一个整数
	{
	case 10:
	case 9:
		cout << "优" << endl; break;
	case 8:
		cout << "良" << endl; break;
	case 7:
		cout << "中" << endl; break;
	case 6:
		cout << "及格" << endl; break;
	default:
		cout << "啥也不是 不及格" << endl;
	}
	system("pause");
	return 0;
}

/*
	输入分数：89
	良
	请按任意键继续. . .
*/