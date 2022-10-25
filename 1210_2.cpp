//4.2循环结构
//4.2.1 while循环
#include <iostream>
using namespace std;
#include <ctime>//使用time需要加此头文件
int main()
{
	int num = 0;
	while (num < 10)//括号内写循环条件；避免死循环的出现
	{
		cout << num << endl;
		num++;
	}
	//4.2.1练习猜数字
	// 添加随机数种子，用系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));//不加这行生成的是伪随机数
	//生成随机数
	int num1 = rand() % 10 + 1;//rand()%10生成0-9之间的随机数
	//玩家输入数
	int wan = 0;
	while (1)
	{
		cin >> wan;
		if (wan > num1)
		{
			cout << "猜大了" << endl;
		}
		else if (wan < num1)
		{
			cout << "猜小了" << endl;
		}
		else
		{
			cout << "猜对啦" << endl;
			break;//可以利用break退出当前循环
		}
	}


	

	
	
	system("pause");

	return 0;
}