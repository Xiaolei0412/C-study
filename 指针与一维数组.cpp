/*
	数组元素的指针：
	p=a 跟 p=&a[0]是等价的；
*/

#include<iostream>
using namespace std;
int main()
{
	//利用指针访问数组元素读取数组元素；
	//先定义一个数组；
	int app[10] = { 1,2,3,4,5,6,7,8,9,10 }, *p2 = app;
	int bpp[10],*p1=bpp;

	//随机的数组元素：
	cout << "输出随机的数组元素2x 的值" << endl;
	for (int j = 0; j < 10; j++)
	{
		*p1++ = 2 * (j + 1);   //就是等价于*(p++)=2 * (j + 1)
	}
	for (p1 = bpp; p1 < bpp + 10;)
	{
		cout << *p1++ << endl;
	}
	cout << "输出指定数组的元素app[10]：" <<endl;

	//指定数组的元素
	for (int i = 0; i < 10;i++)
	{
		//cout << app[i]<< endl;
		//利用指针访问数组 app[10]；
		cout << *p2 << endl;
		p2++;  
	}


	system("pause");
	return 0;
}
/*
程序输出：
输出随机的数组元素2x 的值
2
4
6
8
10
12
14
16
18
20
输出指定数组的元素app[10]：
1
2
3
4
5
6
7
8
9
10
*/

////用指针相减的运算，计算字符串的长度。
//#include<iostream>
//using namespace std;
//int main()
//{
//	char s[50], *p = s;
//	cout << "请输入一个字符串：" << endl;
//	cin >> p;
//	while (*p != 0)
//		p++;
//	cout << "字符串的长度是：" << p-s<<endl;
//
//	system("pause");
//	return 0;
//}