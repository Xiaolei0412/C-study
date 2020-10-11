#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20;
	cout << "<  <=  >  >==  == !=\n";
	cout << (a < b) << "\t" << (a <= b) << "\t" << (a > b) << "\t";
	  //  "\t 的意思是 ：水平制表符。将当前位置移到下一个tab位置。"
	system("pause");
	return 0;
}
