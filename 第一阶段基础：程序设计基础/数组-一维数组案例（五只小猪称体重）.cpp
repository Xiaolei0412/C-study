#include<iostream>
using namespace std;
int main()
{
	int pig[5] = { 400,600,100,300,400 }; //建立一个数组
	cout << "五头猪的体重分别为：" << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << pig[j] << endl;  //输出五头猪的体重
	}
    
	//从数组中找到最大值
	int max = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (pig[i]>max)  //如果有头猪比我的值还大 则将这个最重的猪赋值给MAX
		{
			max = pig[i];
		}
	}
	//打印最大值
	cout << "最重的一头猪是：" << max << endl;
	system("pause");
	return 0;
}