/*
	函数的定义：1.无参函数 <type> <函数名>() {}
					void ptint_title()
						{ cout << "00" << endl; }
				2.有参函数 
					int max(int x,int y) {return ( x>y ? x:y );}
				3. 形式参数（函数名括号中所列举的参数）
					float f(float x,float y,int m)
						{ ... }  //函数体
	函数的调用：
*/


#include<iostream>
using namespace std;

//函数的调用，输入两个实数，求其中最大的数
//float max(float x, float y)
//{
//	return (x > y ? x : y);   //被调函数必须在前面才能正常调用
//}

int main()
{
	float max(float x, float y);  //如果没有个就运行不了
	float a, b;
	cout << "输入两个实数" << endl;

	cin >> a >> b;
	cout << "最大的数为：" << max(a, b) << endl;
	system("pause");
	return 0;  
}
float max(float x, float y)
{
	return (x > y ? x : y);
}
