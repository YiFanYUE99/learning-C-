#include <iostream>
using namespace std;
//访问子类 同名成员，直接访问即可
//访问父类 同名成员需要加作用域
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func(int a)
	{
		cout << "Base下func" << endl;
	}

	int m_A;
};
class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son下func" << endl;
	}
	int m_A;
};
void test01()
{
	Son s;
	cout << "直接访问m_A=" << s.m_A << endl;
	cout << "父类中的m_A=" << s.Base::m_A << endl;//需要加作用域

	s.func();//直接调用调用的是子类的成员
    //加作用域调用父类的同名函数
	s.Base::func(100);

	//如果子类有和父类的 同名成员函数 ，会自动隐藏掉父类所有同名成员函数
	//要访问父类的同名成员函数要加参数

}
int main()
{
	test01();//直接访问到的 同名成员 是 子 类的
	system("pause");

	return 0;

}