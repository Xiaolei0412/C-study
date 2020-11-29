/*
	for语句表达式：

	for(<表达式1>;<表达式2>;<表达式3>)
		<循环体语句>

	【作用】：满足循环条件，执行循环语句。
*/

//【计算 1+2+....+100的值】


#include<iostream>
using namespace std;
int main()
{
	int n,sum = 0;
	for (n = 1; n <= 100; n++)   //直到n>100时结束循环.
		sum += n;    //相当于sum=sum+n.
	cout << "sum=" << sum << endl;
	system("pause");
	return 0;
}


//【每隔5个数输出1~100的整数】

#include<iostream>
using namespace std;
int main()
{
	int counter;
	for (counter = 0; counter <= 100; counter += 5) // *counter=counter+5
		cout << counter << endl;
	system("pause");
	return 0;
}
