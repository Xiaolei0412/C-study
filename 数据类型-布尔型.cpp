/* *******************************************************
                       布尔型（bool）
bool类型只有两种：
1.true - 真（本质是1）
2.false - 假（本质是0）

******************************************************** */
#include <iostream>
using namespace std;
int main()
{
	//创建一个bool类型
	bool flag1 = true;
	cout << flag1 << endl; //1
	bool flag2 = false;
	cout << flag2 << endl; //0
	//查看bool类型所占的空间大小
	cout << "bool类型所占的空间大小为：" << sizeof(bool) << endl;


	system("pause");
	return 0;
}