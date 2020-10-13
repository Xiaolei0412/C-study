/*字符数组定义形式
   char 数组名[常量表达式]
   char agg[] = "happen";  //该数组长度为7

   用cin 直接输入 但是cin只能接收空格符之前的部分
   cin.get也可以接收含有空格的字符串
   cin.getline 可以接收含有空格的字符串 对多个字符数组进行输入时 应使用这个
*/

#include<iostream>
using namespace std;
int main()
{
	//char sqr[] = {'h','a','p','p','e','n'};  //数组的长度就是字符的个数
	char agg[] = "happen";  //该数组长度为7
	cout << agg << endl;

	// cout.write 输出字符串或者字符数组中前n个字符
	cout << "前三个字符为：" << endl;
	cout.write(agg, 3);
	cout << endl;

	//用cin 直接输入 但是cin只能接收空格符之前的部分
	//cout << "请输入一段字符：" << endl;
	//char sqr[20];
	//cin >> sqr;
	//cout << "输出：" << endl;
	//cout << sqr << endl;;

	//cin.getline 可以接收含有空格的字符串 对多个字符数组进行输入时 应使用这个
	//cin.get也可以实现 
	char app[20];
	cout << "请再输入一段字符：" << endl;
	cin.get(app,20);
	cout << app << endl;


	system("pause");
	return 0;
}