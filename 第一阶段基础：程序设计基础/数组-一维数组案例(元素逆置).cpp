//案例：数组元素逆置
//请声明一个5个元素的数组，并且将元素逆置 例：（1 3 2 4 5）--（5 4 3 2 1）

//【实现元素逆置】
#include<iostream>
using namespace std;
int main()
{
	//1.创建一维数组
	int LDY[6] = { 4,8,2,5,6,1};  //创建一个数组
	int i;
	for (i = 0; i <6; i++)
	{
		cout << LDY[i] << endl;
	}

	//2.实现逆置
	int start = 0;  //记录其实下标位置
	int end = sizeof(LDY)/sizeof(LDY[0])-1;    //记录结束下标位置

	while (start < end)
	{
		//实现元素互换
		int temp = LDY[start];
		LDY[start] = LDY[end];
		LDY[end] = temp;

		start++;
		temp--;
	}
	//输出互换后的数据
	cout << "元素逆置后为：" << endl;
	for (i = 0; i <6; i++)
	{
		cout << LDY[i] << endl;
	}

	system("pause");
	return 0;
}


//【将10个数按由小到大的顺序输出(15,8,0,-6,2,39,-53,12,10,6)】
#include<iostream>
using namespace std;
int main()
{
	int a[10] = { 15,8,0,-6,2,39,-53,12,10,6 };
	int i, j, temp;

	//先比较排序的总次数
	for(i=0;i<9;i++) //0~9 
		for(j=i+1;j<10;j++)
			if(a[i]>a[j])           //每轮比较的次数
			{
				temp = a[i]; a[i] = a[j]; a[j] = temp;  //逆置 如果大的就排在后面
			}
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << endl;      //输出排序之后的结果
	}
	system("pause");
	return 0;
}

/*
程序输出：
-53
-6
0
2
6
8
10
12
15
39
*/