/*
采用cin 完成
cin >>变量 1>>变量2>>变量n;
*/

#include <iostream>
using namespace std;
int main()
{
	int a;
	double b;
	char c;
	cin >> a >> b >> c;
	cout << "a=" << a << "\nb=" <<b<< "\nc=" << c << "\n";
	            //  \n 的意思是：回车换行。将当前位置移到下一行的开头。
		system("pause");
	return 0;
}
