//sizeof运算符：求某一数据类型或某一变量在内存中所占空间的字节数。
//sizeof(变量名或数据类型)或sizeo 比变量名或数据类型
#include<iostream>
using namespace std;
int main()
{
	short int ashort; float afloat;
	int aint; long along; char achar;
	cout << "data type\t memory used(bytes) \n";  //内存使用
	cout << "short int\t" << sizeof(ashort) << "\n";
	cout << "integer \t" << sizeof(aint) << "\n"; 
	cout << "long integer\t" << sizeof(along) << "\n";
	cout << "char	\t" << sizeof(achar) << "\n";
	cout << "float	\t" << sizeof(afloat) << "\n";
	system("pause");
	return 0;
}

/*
data type        memory used(bytes)
short int       2
integer         4
long integer    4
char            1
float           4
*/
