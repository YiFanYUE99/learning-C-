#include <iostream>
using namespace std;
//类模板中 成员函数 在调用时才去创建
class Person1
{
public:
	void showperson1()
	{
		cout << "Person1show" << endl;
	}
};
class Person2
{
public:
	void showperson2()
	{
		cout << "Person2show" << endl;
	}
};

template<class T>
class myclass
{
public:
	T obj;
	//类模板的成员函数
	void func1()
	{
		obj.showperson1();
	}
	void func2()//没调用所以没创建，不会报错
	{
		obj.showperson2();
	}
};

void test01()
{
	myclass<Person1>m;
	m.func1();//可以运行
	//m.func2();//不能运行
}
int main()
{
	system("pause");

	return 0;

}