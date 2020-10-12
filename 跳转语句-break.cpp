/*
 作用：用于跳出选择结构或者循环结构
 1.出现在switch条件语句中，跳出当前循环语句
*/


//【在switch语句中使用break】
#include<iostream>
using namespace std;
int main()
{
	cout << "请选择挑战副本的难度：" << endl;
	cout << "1.普通" << endl;
	cout << "2.中等" << endl;
	cout << "3.困难：" << endl;

	int num = 0;
	cin >> num;
	switch (num)
	{
		case 1:
			cout << "您选择的难度是普通" << endl; 
			break;  //退出循环
		case 2:
			cout << "您选择的困难是中等" << endl;
			cout << "您选择的困难是中等" << endl;
			break;
		case 3:
			cout << "您选择的难度是困难" << endl;
			break;
	}
	system("pause");
	return 0;
}



//【在循环语句中使用break】
#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
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
*/

//【在嵌套循环语句中使用break，退出内层循环】
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (j == 5)
			{
				break;  //结束内层循环
			}
			cout << "*" << "	";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
/*
程序输出：
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*/