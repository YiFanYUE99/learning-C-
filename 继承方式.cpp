#include <iostream>
using namespace std;
//3种继承方式：1公共继承public2保护继承protected3私有继承private
//私有权限永远是私有权、子类无法访问
//保护继承使得公共权限变为保护权限
//私有继承使得公共和保护权限均变为私有权限
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//仍是公共权限
		m_B = 10;//仍是保护权限
		//m_C=10;//父类中私有权限不能访问
	}
};
class son2 :protected Base1
{
public:
	void func()
	{
		m_A = 10;//变为保护权限
		m_B = 10;//仍是保护权限
		//m_C=10;//父类中私有权限不能访问
	}
};
class son3 :private Base1
{
public:
	void func()
	{
		m_A = 10;//变为私有权限
		m_B = 10;//变为私有权限
		//m_C=10;//父类中私有权限不能访问
	}
};
class grandson :public son3
{
	void func()
	{
		//m_A = 1000;//是父类son3的私有成员
	}
};
void test01()
{
	son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//保护权限类外访问不到
	son2 s2;
	//s2.m_A = 100;//变为保护权限，类外访问不到
}
int main()
{
	test01();
	system("pause");

	return 0;

}