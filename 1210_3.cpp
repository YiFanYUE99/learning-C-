//4.程序流程结构
//4.2.2do while循环（与while的不同在于while先判断是否符合循环条件在执行，dowhile先执行再判断）
#include <iostream>
using namespace std;
int main() 
{
	int num = 0;//0在C++中是false
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	//练习：水仙花数：一个三位数，每个位数上的数字的3次幂之和等于它本身
	int num1 = 100;
	do
	{
		int a = 0;//很重要：要先初始化再赋值
		int b = 0;//很重要：要先初始化再赋值
		int c = 0;//很重要：要先初始化再赋值

		a = num1 /100;
		b = num1 / 10 % 10;
		c = num1 % 10;

		if(a*a*a+b*b*b+c*c*c==num1)
		{
			cout << num1 << endl;
		}
		num1++;
	} while (num1 < 1000);
	
	system("pause");

	return 0;
}

