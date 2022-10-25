#include <iostream>
using namespace std;
//赋值运算符重载
//编译器给一个类添加四个函数：构造、析构、拷贝函数和④赋值运算符operator=，对属性值拷贝
class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);
	}
	~Person()//析构
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//**重载 赋值运算符
	Person& operator=(Person& p)
	{
	    //编译器提供浅拷贝如下，使得p2的*m_Age也指向p2的堆区内存；使得堆区内存重复释放，崩溃
		//m_Age=p.m_Age;
		//应该先判断是否有属性在堆区，如果有先释放干净再做深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);
		//返回对象本身(引用)，不是值
		return *this;
	}
	int *m_Age;//堆区数据
};
void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	//赋值操作
	
	p3 = p2 = p1;
	//深拷贝赋值
	cout << "p1年龄" << *p1.m_Age << endl;
	cout << "p2年龄" << *p2.m_Age << endl;
	cout << "p3年龄" << *p3.m_Age << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}