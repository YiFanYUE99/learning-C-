#include <iostream>
using namespace std;
int main()
{
	//4.1.1 if语句
	int score = 0;
	cout << "分数" << endl;
	cin >> score;
	cout << "您输入的分数" << score<<endl;
	//if条件后不要加分号冒号，和python不一样
	if (score > 60)
	{
		cout << "passed" << endl;
	}
	else
	{
		cout << "failed" << endl;
	}

	//多条件if语句
	//一定不要区间性判断（0<=score<=60等），python可以，C++不行，分成几个else if来判断即可
	int score2 = 0;
	cout << "分数" << endl;
	cin >> score2;
	cout << "您的分数" <<score2<< endl;
	if (score2>100)
	{
		cout << "wrong" << endl;
	}
	else if ( score2 <0)
	{
		cout << "wrong" << endl;
	}
	else if (score2>=60)
	{
		cout << "passed" << endl;
	}
	else
	{
		cout << "failed" << endl;
	}


	//4.1.2三目运算符
	int a = 10;
	int b = 1;
	int c = 0;
	c = (a > b ? a : b) ;
	cout << "c="<< c << endl;//返回较大的a
	(a > b ? a : b) = 100;//将100赋值给较大的a
	cout << "a=" << a << endl;

	//4.1.3switch语句（电影打分）//不能判断区间但是执行效率高
	cout << "电影打分" << endl;
	int fenshu = 0;
	cin >> fenshu;
	cout << "您的打分" << fenshu << endl;
	switch (fenshu)
	{
	case 10://case后只能是整型或者字符型
		cout << "经典电影" << endl;
		break;//符合该条件就推出当前分支
	case 9:
		cout << "经典电影" << endl;
		break;
	case 8:
		cout << "不错的电影" << endl;
		break;
	case 7:
		cout << "不错的电影" << endl;
		break;
	case 6:
		cout << "一般电影" << endl;
		break;
	case 5:
		cout << "一般电影" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}


	system("pause");

	return 0;

}

//4.程序流程结构：①顺序结构②选择结构③循环结构
//4.1选择结构
//4.1.1 if语句：条件后不要加分号冒号
//可以只有if没有else；没有else就是单行if语句;多条件if 、else if、else if、else
//4.1.2三目运算符;可以带上括号继续赋值； a>b?a:b 如果a>b返回变量a，否则返回变量b 
//4.1.3 switch语句:switch(case){case 整数/字符型: break;case: break; default: break;}

