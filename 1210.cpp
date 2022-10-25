#include <iostream>
using namespace std;
int main()
{
	//3.1.1加减乘除
	int a1 = 10;
	int b1 = 9;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数（int）相除结果依然是整数，会自动去除小数部分
	//被除数为0时报错

	//两小数相除结果可以是小数
	double d1 = 0.5;
	double d2 = 0.28;
	cout << d1 / d2 << endl;

	//3.1.2取模；被除数一样不能为0否则报错
	cout << a1 % b1 << endl;//得到10%9=1
	cout << b1 % a1 << endl;//得到9%10=9
	//有小数不能做取模运算

	//3.1.3递增递减
	int a = 10;
	++a;//前置递增，使a=a+1
	int a2 = ++a * 10;//前置运算是先使a=a+1=11+1=12,再进行其它运算
	cout << "a2=" << a2 << endl;

	int b = 10;
	b++;//后置递增，使得b=b+1
	int b2 = b++ * 10;//后置运算是先运行其他表达式，再使b=b+1=11+1
	cout << "b2=" << b2 << endl;

	int c = 10;
	--c;//前置递减
	int c2 = --c * 10;//先让c=c-1,再c*10
	cout << "c2=" << c2<<c << endl;

	int e = 10;
	e--;
	int e2 = e-- * 10;//先让e*10，再让e=e-1
	cout << "e2=" <<e2<<e<< endl;

	//赋值运算符
	int g = 10;
	g = 100;//将100赋值给g
	cout << "g=" << g << endl;
	g -= 10;//g=g-10
	cout << "g=" << g << endl;
	g += 9;//g=g+9
	cout << "g=" << g << endl;
	g /= 9;//g=g/9
	cout << "g=" << g << endl;
	g *= 2;//g=g*2
	cout << "g=" << g << endl;
	g %= 3;//g=g%3
	cout << "g=" << g << endl;

	//3.3比较运算符
	cout << (e == g) << endl;//表明e和g相等不成立，返回0
	cout << (e != g) << endl;//e确实不等于g，返回1
	cout << (e > g) << endl;//e比g大成立，返回1
	cout << (e < g) << endl;//e比g小不成立，返回0
	cout << (e >= g) << endl;
	cout << (e <= g) << endl;

	//3.4逻辑运算符g=1 e=8
	cout << !e << endl;//c++中除了0都是真
	cout << !!e << endl;//两次取反又变为真

	cout << (e && g) << endl;//全是真1才是真1
	cout << (!e && g) << endl;//有一个不是真1就是假0

	cout << (!e || !g) << endl;//全不为真才是假
	cout << (!e || g) << endl;//有一个为真就是真





	system("pause");

	return 0;
}
//3.运算符
//3.1算术运算符
//3.1.1+-*/
//3.1.2取模运算%：求余数10%3=1
//3.1.3递增递减运算符：++前置(先加1再做别的运算)、后置++（先运算再加1）
//3.2赋值运算= += -= *= /= %=
//3.3比较运算符：== != < > <= >=;输出结果为0（假）或1（真）
//3.4逻辑运算符：非! 与&& 或||

