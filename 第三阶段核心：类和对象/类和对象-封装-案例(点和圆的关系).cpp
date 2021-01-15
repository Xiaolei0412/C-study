#include<iostream>
using namespace std;
//先定义一个点的类；
class point  //也属于一个自己定义的类型
{
public:
	//设置x;
	void setx(int x)
	{
		p_x = x;
	}
	//获取x；
	int getx()
	{
		return p_x;
	}
	//设置y；
	void sety(int y)
	{
		p_y = y;
	}
	//获取y；
	int gety()
	{
		return p_y;
	}
private:
	int p_x; 
	int p_y;

};
//先定义一个圆的类；
class circle
{
public:

	//设置半径；
	void setr(int r)
	{
		c_r = r;
	}
	//获取半径；
	int getr()
	{
		return c_r;
	}
	//设置圆心；
	void setcenter(point center)
	{
		c_center = center;
	}
	//获取圆心；
	point getcenter()
	{
		return c_center;
	}

private:
	//定义一个半径；
	int c_r;
	point c_center;//圆心
};
//判断点和圆的位置关系；
//------------------圆------------点--//
void isincircle(circle &c, point &p)
{
	//计算点到圆心的距离；
	//获取点到圆心的距离
	int distence = (c.getcenter().getx() - p.getx())*(c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety())*(c.getcenter().gety() - p.gety());

	//计算半径的平方；
	//获取半径的平方
	int R1 = c.getr()*c.getr();

	//比较点到圆心的距离；
	if (distence == R1)
	{
		cout << "则点在圆上！" << endl;
	}
	else if (distence < R1)
	{
		cout << "则点在圆内!" << endl;
	}
	else 
	{
		cout << "则点在圆外！" << endl;
	}
}

int main()
{
	circle c;
	point center;
	//设置圆心的点
	c.setr(10);
	center.setx(10);
	center.sety(10);
	c.setcenter(center);

	//设置一个点
	point p;
	p.setx(10);
	p.sety(5);

	//在主函数里调用这个数
	isincircle(c, p);
	system("pause");
	return 0;
}