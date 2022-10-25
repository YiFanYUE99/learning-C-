//4.程序流程结构
// 4.2.3for循环语句(起始表达式；条件表达式；末尾循环体){循环语句}
//
//
//
#include <iostream>
using namespace std;
int main()
{
	//for循环分号分隔
	for (int i = 0; i < 10; i++)//也可以括号内就写两个分号，把三个条件分开写
	{
		cout << i << endl;
	}
	//敲桌子练习
	for (int i = 1; i < 101; i++)
	{
		if (i % 7 == 0)
		{
			cout << "敲桌子" << i <<endl;
		}
		else if (i % 10 == 7)
		{
			cout << "敲桌子" << i << endl;
		}
		else if (i / 10 % 10 == 7)
		{
			cout << "敲桌子" << i << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	system("pause");

	return 0;
}