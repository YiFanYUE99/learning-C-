#include <iostream>
using namespace std;
//浅拷贝：简单赋值操作（编译器提供的拷贝构造函数）

//深拷贝：在堆区重新申请空间，进行拷贝操作

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int age,int height)
	{
		m_Age = age;
		new int(height);
		m_Height = new int(height);//使用指针接受堆区数据
		cout << "Person的有参构造函数调用" << endl;
	}
	//自己创建拷贝构造函数，避免浅拷贝带来的问题
	Person(const Person& p)
	{
		cout << "Person拷贝函数调用" << endl;
		m_Age = p.m_Age;
		//编译器默认实现m_Height = p.m_Height;
		//*深拷贝操作如下
		m_Height = new int(*p.m_Height);
	}
	~Person()
	{
		////析构代码，将堆区开辟数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		//浅拷贝时以上操作崩溃

		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
	int *m_Height;//指针
};
void test01()
{
	Person p1(18,169);
	cout << "p1的年龄" << p1.m_Age<<"身高为"<< *p1.m_Height<< endl;
	//p1.m_Height身高会输出指针，故要加*解引用
	Person p2(p1);
	cout << "p2的年龄为" << p2.m_Age << "身高为" << *p2.m_Height << endl;
	//运行结果p2的年龄也为18
	//编译器提供了拷贝构造函数（浅拷贝）
	//指针指定堆区的一块内存，浅拷贝会导致堆区内存重复释放，需要用深拷贝
	//深拷贝重新指定一块内存，两块内存中存放着相同的数据
}

int main()
{
	test01();
	system("pause");

	return 0;

}