#include<iostream.h>
void main()
{
	const double PI = 3.1415926;
	double radius;
	double area;
	double circumference;
	cout <<"输入半径:";
	cin >> radius;
	area = PI*radius*radius;
	circumference = 2.0*PI*radius;
	cout <<"圆面积:" << area <<endl;
	cout <<"圆周长:"<< circumference <<endl;
}