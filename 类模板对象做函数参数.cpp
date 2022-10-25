#include <iostream>
#include<string>
using namespace std;
//类模板对象做函数参数
template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showperson()
	{
		cout << "姓名" << this->m_name << "年龄" << this->m_age << endl;
	}

	T1 m_name;
	T2 m_age;

};


//一共有三种传入方式：

//1指定传入类型（最常用）
void printperson1(Person<string,int>&p)
{
	p.showperson();
}

void test01()
{
	Person<string, int>p("Tom", 20);
	printperson1(p);
}



//2参数模板化
template<class T1,class T2>
void printperson2(Person<T1, T2>& p)//参数模板化
{
	p.showperson();
	//查看类型
	cout << "T1的类型为：" << typeid(T1).name() << endl;//typrid(T).name()查看T的数据类型
	cout << "T2的类型为：" << typeid(T2).name() << endl;

}

void test02()
{
	Person<string, int>p("Jerry", 20);
	printperson2(p);
}

//3整个类模板化
template<class T>
void printperson3(T& p)//直接将Person作为一个类
{
	p.showperson();
	cout << "T的数据类型" << typeid(T).name() << endl;//T是person class类型
}


void test03()
{
	Person<string, int>p("唐僧", 90);
	printperson3(p);
}



int main()
{
	test01();
	test02();
	test03();
	system("pause");

	return 0;

}