                //--------指针与二维数组---------//
/*
	与一维数组不同的是：除了有元素的地址外，还有标识各行起始位置的行首地址
	**指针就是间接的访问数据，首先取得指针的内容，把它作为地址，然后从这个地址提取数据。
	通常用于动态数据结构；
*/

//用指向元素的指针变量生成由自然数1-25组成的5*5方阵；
#include<iostream>
using namespace std;
int main()
{
	int a[5][5];
	int *jp = *a;  //就是代表a[0][0]的地址；
	int i, j;
	for (i = 1; jp < *a + 25; jp++)  //*a + 25 遍历数组的所有元素并对其进行赋值；
	{
		*jp = i++;
		//cout << *jp;
		if ((i - 1) % 5==0)
			cout << endl;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			cout << a[i][j]<<"	";
			cout<<endl;
	}
	system("pause");
	return 0;
}