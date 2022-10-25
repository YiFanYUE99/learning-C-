#include <iostream>
using namespace std;
//运算符重载：对已有的运算符进行重新定义，以适应不同的数据类型
//加号运算符重载：实现两个自定义数据类型相加的运算

//通过自己写成员函数，实现两个对象相加属性后得到虚拟的对象
//比如创建两个人，把他们的属性相加
class Person
{
public:
	////1、成员函数重载+
	//Person operator+(Person& p)
	//{
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	int m_A;
	int m_B;
};
//2、全局函数重载+
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	//成员函数的本质调用
	//Person p3 = p1.operator+(p2);
	//全局函数重载的本质调用
	//Person p3 = operator+(p1, p2);
	Person p3 = p1 + p2;
	cout << "p3A" << p3.m_A << endl;
	cout << "p3B" << p3.m_B << endl;
}





int main()
{
	test01();
	system("pause");

	return 0;

}