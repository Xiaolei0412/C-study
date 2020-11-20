

#include<iostream>
using namespace std;

//数组元素作函数的参数

int add(int x, int y, int z)   //调用这个函数
{
	int c[10];
	c[z] = x + y;
	return c[z];
}

int mian()	
{
	int a[10] = { 2,4,5,8,7,8,5,8,4,5 };  //定义一个一维数组
	int b[10] = { 4,8,7,1,5,7,8,1,2,5 },i;
	int s[10];                            //s[10]
	
	for ( i = 0; i < 10; i++)
	{
		//cout << "s[i] = add(a[i], b[i],i) ";
		s[i] = add(a[i], b[i], i);
		//cout << "	" << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << s[i] << "	";
		cout << endl;
	}
	system("pause");
	return 0;
}


//用数组名作函数的参数；
