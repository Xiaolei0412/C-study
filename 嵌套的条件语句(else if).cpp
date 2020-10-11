//已知一个函数，任意给定自变量X的值，求函数Y的值。
#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "input x==";
	cin >> x;
	if (x > 0)  y = 1;
	else if (x == 0)  y = 0;  // else与前边最近的未匹配的if配对。
	else y = -1;
	cout << "x=" << x << "y=" << y << endl;
	system("pause");
	return 0;
}

/*
input x==1
x=1y=1
请按任意键继续. . .
*/
