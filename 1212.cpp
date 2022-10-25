//4.2嵌套循环
//在循环中嵌套一层循环
#include <iostream>
using namespace std;
int main()
{
	//打出星图10*10
	//外层循环一次，内层循环一周
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";//没有endl不换行
		}
		cout << endl;//endl实际是换行的意思
	}
	//乘法口诀表
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <=i ; j++)
		{
			cout << i << "*" << j << "=" << i * j<<" ";
		}
		cout << endl;
	}



	system("pause");

	return 0;

}