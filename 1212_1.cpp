//4.3跳转语句
//4.3.1break语句：跳出选择结构或循环结构
//break语句的三个使用时机
//①出现在switch语句中，作用是终止case并跳出switch
//②出现在循环语句中，作用是跳出循环语句
//③出现在嵌套循环中，跳出最内层的循环语句
//4.3.2continue语句
//作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环；break是退出，continue是跳过
//4.3.3goto语句：无条件跳转语句
#include <iostream>
using namespace std;
int main()
{
	//①在switch语句中，作用是终止case并跳出switch
	//副本难度选择

	cout << "选择副本难度" << "1.hard" << "2.median" << "3.easy" << endl;

	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "困难" << endl;
		break;
	case 2:
		cout << "中等" << endl;
		break;
	case 3:
		cout << "简单" << endl;
		break;
	default:
		break;
	}

	//②出现在循环语句中，作用是跳出循环语句
	//打印十个数，打印到5就退出
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	//③出现在嵌套循环中，跳出最内层的循环语句
	//输出一半的星星
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0 ;j < 10; j++)
		{
			if (j > i)
			{
				break;
			}
			cout << "*" ;
		}
		cout << endl;
	}

	//4.3.2continue
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;//i为2的倍数的时候，continue跳出此循环，进入下一次循环；break则到0循环就退出了
		}
		cout << i << endl;
	}

	//4.3.3goto:跳转到标记处；不推荐使用
	cout << "1" << endl;
	goto FLAG;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	FLAG:
	cout << "5" << endl;
	
	system("pause");

	return 0;

}