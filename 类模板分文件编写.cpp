#include <iostream>
using namespace std;
#include<string>
#include"Person.hpp"//手动将.h改为.cpp
//#include"Person.cpp"//类模板文件分写要包含cpp而不是.h
//类模板分文件编写
//问题：
// 类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//解决1 包含.cpp而不是.h
//解决2 常用：将.h .cpp写道一起，后缀名改为.hpp

//template<class T1,class T2>
//class Person 
//{
//public:
//	Person(T1 name, T2 age);
//	void showperson();
//
//	T1 m_name;
//	T2 m_age;
//
//};
////模板函数的类外实现
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showperson()
//{
//	cout << "name" << this->m_name << "age" << this->m_age << endl;
//}

void test01()
{
	Person<string, int>p("Jerry", 18);
	p.showperson();
}

int main()
{
	test01();
	system("pause");

	return 0;

}