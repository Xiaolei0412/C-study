//设计一个立方体类 求立方体的面积以及体积；
//用全局函数判断两个立方体是否相等；

#include<iostream>
using namespace std;
#include<string>

class cube
{
public:
//---------行为--------//
	//设置长
	void setL(int L)
	{
		c_L = L;
	}
	//获取长
	int getL()
	{
		return c_L;
	}
	//设置宽
	void setW(int W)
	{
		c_W = W;
	}
	//获取宽
	int getW()
	{
		return c_W;
	}
	//设置高
	void setH(int H)
	{
		c_H = H;
	}
	//获取高
	int getH()
	{
		return c_H;
	}
	//获取面积（公式）
	int getarea()
	{
		return c_L * c_W * 2 + c_L * c_H * 2 + c_H * c_W * 2;
	}
	//获取体积
	int getbulk()
	{
		return c_L * c_W*c_H;
	}
	//用成员函数来判断两个函数是否相等；可以在类内访问
	/*bool issameClass(cube &cub)
	{
		if (c_L() == cub.getL() && c_W() == cub.getW() && c_H() == cub.getH())
		{
			return true;
		}
		return false;
	}*/

//--------属性-------//
	//定义属性
public:
	int c_L;
	int c_W;
	int c_H;
	int c_area;
	int c_bulk;

};

//利用全局函数判断两个立方体是否相等；
//bool返回值类型是 true; false;
bool issame(cube cub1, cube cub2)
{
	if (cub1.getL() == cub2.getL() && cub1.getW() == cub2.getW() && cub1.getH() == cub2.getH())
	{
		return true;
	}
		return false;
}


int main()
{
	//------------注意：只有public 可以输入-----------//
	//创建第一个立方体；
	cube cub1;
	cout << "请输入第一个立方体的长宽高：" << endl;
	cout << "长："  ;
	cin >> cub1.c_L;
	cout << "宽：";
	cin >> cub1.c_W;
	cout << "高：";
	cin >> cub1.c_H;

	//cub1.setL(2);
	//cub1.setW(7);
	//cub1.setH(6);

	cout << "立方体1的面积为："<<cub1.getarea() << endl;
	cout << "立方体1的体积为：" << cub1.getbulk() << endl;

	//创建第二个立方体；
	cube cub2;
	cout << "请输入第二个立方体的长宽高：" << endl;
	cout << "长：";
	cin >> cub2.c_L;
	cout << "宽：";
	cin >> cub2.c_W;
	cout << "高：";
	cin >> cub2.c_H;


	//cub2.setL(6);
	//cub2.setW(7);
	//cub2.setH(5);

	cout << "立方体2的面积为：" << cub2.getarea() << endl;
	cout << "立方体2的体积为：" << cub2.getbulk() << endl;

	//用全局函数来判断，用布尔型调用函数；
	bool ret = issame(cub1, cub2);
		if (ret)
		{
			cout << "全局函数判断---两个立方体相等：" << endl;
		}
		else
		{
			cout << "全局函数判断---两个立方体不相等：" << endl;
		}

	//用成员函数来判断，用布尔型调用函数；
	/*	ret = cub1.issameClass(cub2);
		if (ret)
		{
			cout << "成员函数判断-两个立方体相等：" << endl;
		}
		else
		{
			cout << "成员函数判断-两个立方体不相等：" << endl;
		}
*/

	//issame(cub1,cub2);
	system("pause");
	return 0;
}