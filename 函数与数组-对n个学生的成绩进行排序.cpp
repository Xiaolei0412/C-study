// 对n个学生的成绩进行排序，学生信息：学号 姓名 成绩 用冒泡排序

#include<iostream>
using namespace std;
//先定义学生信息的结构体类型 struct
struct student
{
	int num;
	char name[20];
	float grade;
};
student stu[];
//声明一个排序函数 sort
void sort(student stu[], int n);
//运行主函数 int main()
int main()
{
	int n; //定义n个学生；
	int i;
	cout << "请输入你要访问的学生的个数：" << endl;
	cin >> n;

	//用for循环输入n个学生的信息（访问最先定义的结构体成员）i 
	for (i = 0; i <= n; i++)
	{
		cout << "请输入学生的学号 姓名 成绩：" << endl;
		cin >> stu[i].num >> stu[i].name >> stu[i].grade;
	}
	
	//调用函数
	sort(stu, n);
	cout << " **************排序后*********** " << endl;
	cout << "学号    姓名    分数" << endl;
	for (i = 0; i <= n; i++)                     //输出排序后的（结构体成员的访问）
	{
		cout << stu[i].num << "\t" << stu[i].name << "\t" << stu[i].grade << endl;;
	}

	void sort(student stu[], int n);  //定义排序函数（冒泡排序）
	{
		student temp;
		int j;
		for (i=0;i<n-1;i++)
			for(j=0;j<n-i-1;j++)
				if (stu[i].grade < stu[i + 1].grade)
				{
					temp = stu[i];
					stu[i] = stu[i + 1];
					stu[i + 1] = temp;
				}
	}
	system("pause");
	return 0;
}



//定义这个排序函数
