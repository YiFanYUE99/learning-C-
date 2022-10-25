#include <iostream>
using namespace std;
//1.类模板无 自动类型推导的使用方式
//2.类模板 在模板的参数列表 可以有默认参数//函数模板无默认参数

//类模板
template<class Nametype,class Agetype=int>//int 是默认参数;函数模板无默认参数
class Person
{
public:
	Person(Nametype name, Agetype age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	void showperson()
	{
		cout << this->m_name << this->m_age << endl;
	}

	Nametype m_name;
	Agetype m_age;
};

//类模板无自动类型推导方式
void test01()
{
	Person<string, int>p("Tom", 100);//不能省略《》内的东西，无 自动类型推导
	p.showperson();

	Person<string>p1("Jerry", 10);
	p1.showperson();

}


int main()
{
	test01();

	system("pause");

	return 0;

}