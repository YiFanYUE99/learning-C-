#include <iostream>
using namespace std;
//1.作用：给变量起别名
//数据类型（和原名一样）&别名=原名
//用原名，别名操作的是同一块内存，操纵别名原名也会变

//2.引用的注意事项
//①引用必须要初始化；错误示例 int &b;
//②引用一旦初始化后就不能更改了：不能 b是a的别名，将其改为c的别名；只能将c的值赋给b同时赋给了a

//3.引用做函数参数
//作用：函数传参时，可以利用引用的技术让形参修饰实参（简化指针修改实参）
//交换函数
//①值传递：形参变了实参没变
void exchange1(int c,int d)
{
	int temp = c;
	c = d;
	d= temp;
	cout << "exhange1 c=" << c << endl;
	cout << "exchange1 d=" << d << endl;

}
//②地址传递：实参形参都改变了
void exchange2(int *c, int *d)
{
	int temp = *c;
	*c = *d;
	*d = temp;
	cout << "exhange2 c=" << *c << endl;
	cout << "exchange2 d=" << *d << endl;

}

//③引用传递:代码和值传递一样，参数不一样；用别名修改，操控的同一块内存
void exchange3(int& c, int& d)
{

	int temp = c;
	c = d;
	d = temp;
	cout << "exhange3 c=" << c << endl;
	cout << "exchange3 d=" << d << endl;

}


int main()
{
	int a = 10;
	int &b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;//更改别名原名也会变
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//值传递
	int c = 10;
	int d = 20;
	cout << "初始c=" << c << endl;
	cout << "初始d=" << d << endl;
	exchange1(c, d);//值传递，形参不会修饰实参
	cout << "值传递c=" << c << endl;
	cout << "值传递d=" << d << endl;

	//地址传递：实参会改变
	exchange2(&c, &d);
	cout << "地址传递c=" << c << endl;
	cout << "地址传递d=" << d << endl;

	//引用传递：实参会改变
	exchange3(c, d);
	cout << "引用传递c=" << c << endl;
	cout << "引用传递d=" << d << endl;

	system("pause");

	return 0;

}