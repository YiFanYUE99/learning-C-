#include <iostream>
using namespace std;
//多继承的语法
class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};
class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};
//子类继承两个父类
class Son:public Base1, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test01()
{
	Son s;
	cout << "sizeof Son=" << sizeof(s) << endl;//son占16个字节
    //cl /d1 reportSingleClassLayoutSon "C++允许一类类继承多个类.cpp"
    //查看字节数cLdone
	

	//当不同父类出现同名成员，需要加作用域区分
	cout << "Base1::m_A" << s.Base1::m_A << endl;
	cout << "Base2::m_A" << s.Base2::m_A << endl;

}
int main()
{
	test01();
	system("pause");

	return 0;

}