/*
	（1）.添加随机数种子，防止每次随机数都一样
    srand((unsigned int)time(NULL));

	（2）.int num = rand() % 100 + 1; // rand() % 100 + 1 生成0+1~99+1的随机数

	（3）.break; //在循环中 可以利用关键字来退出当前循环
*/

#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	//添加随机数种子，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	// 1.系统生成随机数
	int num = rand() % 100 + 1; // rand() % 100 + 1 生成0+1~99+1的随机数
	//cout << num << endl; （隐藏随机数）

	// 2.玩家进行猜测
	int value = 0;
	while (1)
	{
		cin >> value;
		
		// 3.判断
			 //大了或者小了 
		if (value > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (value < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "猜对了" << endl;
			//猜对了 退出循环
			break; //在循环中 可以利用关键字来退出当前循环
		}
	}
	
	system("pause");
	return 0;
}

/* 
程序运行结果：
1
猜测过小
5
猜测过小
79
猜测过大
56
猜测过小
*/