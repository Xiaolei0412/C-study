#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double amount = 22.0 / 7; 
	cout << amount << endl;
	cout << setprecision(2) << amount << endl;
	     //【setprecision(2)】设置浮点数的有效数位为n 
	cout <<setiosflags(ios::fixed) << setprecision(2) << amount << endl;
	    //【setiosflags(ios::fixed)】固定的浮点表示
	system("pause");
	return 0;
}