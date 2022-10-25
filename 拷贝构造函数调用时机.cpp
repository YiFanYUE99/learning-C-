//拷贝构造函数调用时机的三种情况
//①使用一个已经创建完毕的对象来初始化一个新对象
//②值传递方式给函数参数传值
//③以值方式返回局部对象
//构造函数的调用规则

//***默认情况下，C++编译器至少给一个类添加三个函数：1构造函数2析构函数3拷贝构造函数
#include <iostream>
using namespace std;
class Person
{
public:
	//Person()
	//{
	//	cout << "Person的默认构造函数调用" << endl;
	//}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	Person(int age)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = age;
	}
	Person(const Person& p)//不写编译器也会写
	{
		m_Age = p.m_Age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	int m_Age;
};
//如果我们写了有参构造函数，编译器就不再提供默认构造函数，依然提供拷贝函数
//如果写了拷贝构造函数，编译器就不再提供其它普通构造函数了
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_Age <<endl;
//}
void test02()
{
	Person p(28);
	Person p2(p);
}


int main()
{
	//test01();

	test02();
	system("pause");

	return 0;

}