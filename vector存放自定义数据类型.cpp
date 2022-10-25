#include <iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
//vector容器存放自定义数据类型

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void test01()
{
	vector<Person>v;

	Person p1("aaa", 10);
	Person p2("abb", 10);
	Person p3("aab", 10);
	Person p4("aba", 10);
	Person p5("baa", 10);
	
	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	//it解引用后是person的数据类型*it;<>内是什么数据类型，*it解出来就是什么数据类型
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "Name: " << (*it).m_name << "Age" << (*it).m_age << endl;
		cout << it->m_name << it->m_age << endl;//it本身是指针，可以通过->的方式拿到name，age

	}

}
//存放自定义的数据类型的 指针
void test02()
{
	vector<Person*>v;

	Person p1("aaa", 10);
	Person p2("abb", 10);
	Person p3("aab", 10);
	Person p4("aba", 10);
	Person p5("baa", 10);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器中的数据
	//it解引用后是person*的数据类型*it;<>内是什么数据类型，*it解出来就是什么数据类型
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)//*it是person的指针
	{
		cout << "\tName" << (*it)->m_name << " Age: " << (*it)->m_name << endl;

	}

}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}