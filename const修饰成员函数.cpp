#include <iostream>
using namespace std;
//常函数：成员函数后加const
class Person
{
public:
	//this指针的本质是指针常量，指针的*指向是不可以修改的
	void showPerson() const//const使得m_A的 值无法修改
	//const（不可修改指针指向值） Person*const(不可修改指针指向) this
	//*成员函数后加const使得指针指向值也不能修改
	{
		/*this->m_A = 100;*/
		//this = NULL;//THIS指针不可以修改指针的指向
	}
	void func()//不是常函数
	{

	}
	int m_A;
	mutable int m_B;//mutable特殊变量，常函数中也可以修改这个值
};
void test01()
{
	Person p;
	p.showPerson();
}
//常对象：声明对象前加const
void test02()
{
	const Person p;//对象前加const，变为常对象
	//p.m_A = 100;//不能改
	p.m_B = 100;//有mutable的特殊变量可以改

	//常对象只能调用常函数
	p.showPerson();
	//p.func();//常对象 不能调用非常函数，因为普通成员函数可以修改属性
}
int main()
{
	system("pause");

	return 0;

}