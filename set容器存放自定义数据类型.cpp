#include <iostream>
using namespace std;
#include<string>
#include<set>
//set�������򣬴���Զ�����������
//set<���ͣ��Ƚ�class> s1
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
		return p1.m_age > p2.m_age;//�������併������
	}
};
void test01()
{

	//�Զ�����������ͻ�ָ���������
	set<Person,compareperson>s;//compareperson���������

	//����Person����
	Person p1("Tom", 18);
	Person p2("Tim", 28);
	Person p3("Tam", 38);
	Person p4("Tonny", 48);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	//ע��compareperson
	for (set<Person,compareperson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������" << (*it).m_name << "����" << (*it).m_age << endl;
	}

}
int main()
{
	test01();

	system("pause");

	return 0;

}