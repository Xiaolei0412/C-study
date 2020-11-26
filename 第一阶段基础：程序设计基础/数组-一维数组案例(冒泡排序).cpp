#include<iostream>
using namespace std;
int main()
{
	//利用冒泡排序实现升序序列
	int sqr[9] = { 5,6,7,1,2,3,9,4,8 };
	int i;
	int j;
	int temp;
	cout << "排序前序列为："<<endl;
	for (i = 0; i < 9; i++)
	{
		cout << sqr[i] << endl;
	}	

	//实现冒泡排序
	for(i=0;i<9-1;i++)    //冒泡排序的总轮数 
		for (j = 0; j < 9 - i - 1; j++)   //每一轮比较的次数
		{
			if (sqr[j] > sqr[j + 1])     //如果第一个数字比第二个数字大，则调换
			{
				temp = sqr[j];
				sqr[j] = sqr[j + 1];
				sqr[j + 1] = temp;
			}
		}
	cout << "冒泡排序后的序列为：" << endl;
	for (j = 0; j < 9 - 1; j++)
	{
		cout << sqr[j] << endl;    //输出排序之后的序列
	}
	system("pause");
	return 0;
}