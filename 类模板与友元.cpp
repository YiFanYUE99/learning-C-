#include <iostream>
using namespace std;
#include<string>
//类模板配合友元的类内和类外实现
//全局函数类内实现：直接在类内声明友元即可
//全局函数类外实现：需要让编译器提前知道全局函数的存在《-麻烦

//类外实现
template<class T1, class T2>
class Person;//也要提前让编译器知道有Person这个类
template<class T1, class T2>
void printperson2(Person<T1, T2>p)
{
	cout << "姓名：" << p.m_name << "年龄：" << p.m_age << endl;
}

template<class T1,class T2>
class Person
{

	//全局函数 类内实现友元关键字friend
	friend void printperson(Person<T1, T2>p)
	{
		cout << "姓名：" << p.m_name << "年龄：" << p.m_age << endl;
	}

	//全局函数类外实现
	//加空模板的参数列表，类外实现要让编译器提前知道这段代码，剪切到最上方
	friend void printperson2<>(Person<T1, T2>p);

public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

private:

	T1 m_name;
	T2 m_age;
};
//1.全局函数在类内实现
void test01()
{
	Person<string, int>p("Tom", 20);
	printperson(p);
}

void test02()
{
	Person<string, int>p("Tom", 20);
	printperson2(p);
}
int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}