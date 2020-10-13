/*
	字符串长度函数：strlen(字符数组名)；
	字符串拷贝函数：strcpy(字符数组1，字符数组2)； “是将2 复制到1中去”
					** 1的长度要远大于2
					例：strcpy(s1,"hello") //1必须是数组名字
		 //字符串的赋值
			strcpy(t,name[j]);
			strcpy(name[j],name[j+1]);
			strcpy(name[j+1],t);

	字符串连接函数：strcat(字符数组1，字符数组2）
  **字符串比较函数：strcmp(字符串1，字符串2）
					** 函数返回值：
					（1）.1 == 2，返回值0
					（2）.1 >  2, 返回值为正整数
					（3）.1 <  2, 返回值为负整数
		//strcmp(字符串1，字符串2）
cin.get也可以接收含有空格的字符串
cin.getline 可以接收含有空格的字符串 对多个字符数组进行输入时 应使用这个
*/
//案例：输入五个同学的名字，用冒泡排序的方法将他们排序。

#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int N = 5;
	char name[N][16],t[16];
	int i, j;

	cout << "请输入"<<N<<"个学生的名字：" << endl;
	for (i = 0; i < N; i++)
		cin.getline(name[i], 16);
	//实现冒泡排序
	for(i=0;i<N-1;i++)
		for (j = 0; j < N - i - 1; j++)
			if (strcmp(name[j],name[j + 1]) > 0)  //如果前面的名字大于后面的名字
			{
				strcpy(t,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],t);
			}
	for(i=0;i<N;i++)
		cout<<"排序后的学生名字为"<<name[i]<<endl;

	system("pause");
	return 0;
}