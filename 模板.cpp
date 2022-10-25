#include <iostream>
using namespace std;
//模板不可以直接使用，它只是一个框架
//模板的通用并不是万能的

//函数模板：
//建立一个通用函数，其函数 返回值 和 形参 类型可以不具体指定，用一个虚拟类型来代表

//两个整型交换函数
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换两个浮点型函数

void swapdouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//将交换int和交换double放入一个模板中，使得各种数据类型都能交换
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//利用函数模板实现交换:两种方法
	//1、自动类型推到导
	myswap(a, b);
	//2.显示指定类型
	myswap<int>(a, b);

	cout << "a=" << a << endl;

	double c = 1.1;
	double d = 2.2;
	//swapdouble(c, d);
	cout << "c=" << c<<endl;

}



int main()
{

	test01();

	system("pause");

	return 0;

}