//函数的重载
//用重载求两个数中较大的函数，分别实现求两个整数.单精度和双精度实数中的大数.
#include<iostream>
using namespace std;
//A求两个整数中的最大数  (a)
int max(int x, int y)
{
	return(x > y ? x : y);
}

//B求两个单精度实数中的大数 (b)
float max(float a, float b)
{
	return(a > b ? a : b);
}
//C求两个双精度实数中的大数 (c)
double max(double m, double n)
{
	return(m < n ? m : n);
}

//

int main()
{
	int a1, a2;
	float b1, b2;
	double c1, c2;
	cout << "请输入两个整数 \n" << endl;
	cin >> a1 >> a2;
	cout << "请输入两个单精度实数\n" << endl;
	cin >> b1 >> b2;
	cout << "请输入两个双精实数\n" << endl;
	cin >> c1 >> c2;

	cout << "输出较大的数为：" << endl;
	cout << max(a1, a2) << endl; 
	cout << max(b1, b2) << endl;
	cout << max(c1, c2) << endl;
	
	system("pause");
	return 0;
}