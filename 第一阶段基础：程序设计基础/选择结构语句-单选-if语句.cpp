//输入任意两个整数，如果第一个数的值比第二个数大，就将它们的值交换后输出。
#include<iostream>
using namespace std;
int main()
{
	float a, b, t;  // 要找一个中间变量t来交换两个变量的值。
	cout << "输入两个数:";
	cin >> a >> b;
		if (a>b)
		{
			t = a, a = b, b = t;
		}
		cout << "交换后为:" << a << "," << b << "\n";
		system("pause");
		return 0;
}
