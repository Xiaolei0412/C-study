//输入三个数 用交换的方法将他们按从小到大的顺序排序
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, t;
	cout << "输入三个数";
	cin >> a >> b >> c;
	if (a > b)
	{
		t = a, a = b, b = t;
	}
	if (a > c)
	{
		t = a, a = c, c = t;
	}
	if (b > c)
	{
		t = b, b = c, c = t;
	}
	cout << "排序后为:" << a << "," << b << "," << c << endl;
	system("pause");
	return 0;
}