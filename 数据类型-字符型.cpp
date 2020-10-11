/**************************************************************************
                               字符型
作用：字符型变量用于显示单个字符
语法： char 变量名 = '单个字符'；   eg:  char ch = 'a';

注：在显示字符型变量时，用单引号括起来，不能用双引号。
    单引号内只能有一个字符，不能是字符串。
字符串并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入存储单元中

                              转义字符
作用：用于表示一些不能显示出来的ASCII字符。
常用的转义字符：\n  --  换行符
                \\  --  反斜杠
				\t  --  水平制表符

				             字符串类型
作用：用于表示一串字符。
C风格字符串
语法：char 变量名[] = "字符串值"；
注意：1.char变量名后加[]
      2.等号后边用双引号包含字符串
C++风格字符串
语法：string 变量名 = "字符串值"；
注意：使用string时 包含一个头文件 #include <string>
************************************************************************** */

#include <iostream>
using namespace std;
#include<string>
int main()
{
	//1.定义一个字符型变量
	char ch1 = 'a';
	cout << "ch1 = " << ch1 << endl;
	//2.查看char所占用的内存
	cout << "char 所占的内存为：" << sizeof(ch1) << endl;
	//3.字符型变量常见的错误
	//char ch2 = "a";  创建字符型变量时，要用单引号。
	//char ch3 = 'csgo';  创建字符型变量时，单引号内只能有一个字符。

	//4.字符型变量所对应的ASCII编码值
	cout << "ch1 所对应的ASCII编码值：" << (int)ch1 << endl; //强制转换成整型

	//5.可以直接使用ASCII编码值给字符型变量赋值
	char b = 98;
	cout <<"ASCII编码值为98时表示="<< b << endl << endl;

	cout << "转义字符的使用\n" << endl;

	//换行符（\n）
	cout << "hello word\n";
	//反斜杠（\\）
	cout << "输出反斜杠：\\" << endl;
	//水平制表符（\t） 1个制表符占八个内存空间 。
	cout << "数据类型     所占空间" << endl;
	cout << "char    \t" << sizeof(char) << endl;
	cout << "int     \t" << sizeof(int) << endl;
	cout << "float   \t" << sizeof(float) << endl;
	cout << "double  \t" << sizeof(double) << endl << endl;

	cout << "字符串类型的使用：\n" << endl;

	//C风格字符串
	char str1[] = "hello word";
	cout << str1 << "\n"<<endl;   // \n可以不加 仅是练习熟悉使用转义字符
	//C++风格字符串
	string str2 = "hello word";
	cout << str2 << "\n"<<endl;   // \n可以不加 仅是练习熟悉使用转义字符

	system("pause");
	return 0;
}