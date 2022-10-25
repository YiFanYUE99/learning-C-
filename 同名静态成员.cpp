#include <iostream>
using namespace std;
//继承中同名静态成员的处理方式
class Base
{
public:
	static int m_A;
    
	static void func()
	{
		cout << "Base func" << endl;
	}
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
	static void func()//子类出现 静态同名函数 父类中 所有同名成员函数 都被隐藏
	{
		cout << "Son func" << endl;
	}
};
int Son::m_A = 200;
//同名静态成员属性
void test01()
{
	Son s;
	//1.通过对象访问
	cout << "通过对象访问" << endl;

	s.func();
	s.Base::func();//加作用域

	
	cout << "Son下m_A" << s.m_A << endl;
	cout << "Base下m_A" << s.Base::m_A << endl;
	//2.通过类名访问
	cout << "通过类名访问" << endl;

	Son::func();
	Son::Base::func();
	
	cout << "Son下m_A" << Son::m_A << endl;
	cout << "Base下m_A" << Son::Base::m_A << endl;
	//类名的方式 访问 父类作用域下的 m_A

	
}
int main()
{
	test01();
	system("pause");

	return 0;

}