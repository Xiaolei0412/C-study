/*
	一维数组定义方式：
	1.数据类型 数组名[数组长度]；
	2.数据类型 数组名[数组长度] = {值1，值2...}；
	3.数据类型 数组名[ ] = {值1，值2...}；
*/

#include<iostream>
using namespace std;
int main()
{
	//数据类型 数组名[ ] = {值1，值2...}； 
	//定义数组的时候必须有初始长度
	int LDY1[] = { 1,2,3,4,5,6,7,8,9 };
	int i;
	for (i = 0; i < 9; i++)
	{
		cout << LDY1[i] << endl;
	}	cout << endl;

	//可以通过数组名统计整个数组占用的内存大小
	int LDY2[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "这个数组所占用的内存空间是：" << sizeof(LDY2) << endl;
	cout << "每个元素占用的内存空间：" << sizeof(LDY2[0]) << endl;
	cout << "元素个数为：" << sizeof(LDY2)/ sizeof(LDY2[0])<<endl;
	cout << endl;

	//可以通过数组名查看数组首地址
	cout << "数组首地址为：" << (int)LDY2<< endl;
	cout << "数组第一个元素地址为：" << (int)&LDY2[0] << endl;  // int 16进制转换成10进制
	cout << "数组第二个元素地址为：" << (int)&LDY2[1] << endl;  //差4个字节（每个元素都是整型）

	//数组名是常量，不可以进行赋值


	system("pause");
	return 0;
}