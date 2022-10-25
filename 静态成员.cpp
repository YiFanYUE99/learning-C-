#include <iostream>
using namespace std;
//静态成员函数
//1.所有对象共享同一个函数
//2.静态成员函数只能访问静态成员变量
class Person
{
public:
	//静态成员函数
	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态成员变量（在全局区）
		//m_B = 200;//静态成员函数 不可以访问 非静态成员变量（在堆区）
		cout << "static void func 调用" << endl;
	}
	static int m_A;//静态成员变量
	int m_B;//非静态成员变量
	//静态成员函数也有访问权限，私有权限在类外访问不到
private:
	static void func2()
	{
		cout << "static void func2调用" << endl;
	}

};
int Person::m_A = 0;
//两种访问方式
void test01()
{
	//1.通过对象访问
	Person p;
	p.func();
	//2.通过类名访问
	Person::func();

	//Person::func2();//类外访问不到私有的成员函数
}

int main()
{
	test01();
	system("pause");

	return 0;

}