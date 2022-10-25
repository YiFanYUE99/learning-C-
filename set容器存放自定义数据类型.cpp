#include <iostream>
using namespace std;
#include<string>
#include<set>
//set容器排序，存放自定义数据类型
//set<类型，比较class> s1
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

class compareperson
{
public:
	bool operator()(const Person&p1, const Person&p2) const
	{
		return p1.m_age > p2.m_age;//按照年龄降序排列
	}
};
void test01()
{

	//自定义的数据类型会指定排序规则
	set<Person,compareperson>s;//compareperson是排序规则

	//创建Person对象
	Person p1("Tom", 18);
	Person p2("Tim", 28);
	Person p3("Tam", 38);
	Person p4("Tonny", 48);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	//注意compareperson
	for (set<Person,compareperson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << "年龄" << (*it).m_age << endl;
	}

}
int main()
{
	test01();

	system("pause");

	return 0;

}