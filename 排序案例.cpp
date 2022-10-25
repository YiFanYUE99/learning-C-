//������������������ͬ����߽���
#include <iostream>
using namespace std;
#include<string>
#include<list>
//���������������������ͬ������߽���
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}

	string m_name;
	int m_age;
	int m_height;

};
//ָ���������
bool compareperson(Person &p1,Person &p2)
{
	//��������������
	if (p1.m_age == p2.m_age)//���������ͬ�����������
	{
		return p1.m_height < p2.m_height;
	}

	return p1.m_age < p2.m_age;

}



void test01()
{
	list<Person>l;
	Person p1("Tom", 21,175);
	Person p2("Jerry", 22,179);
	Person p3("Ann", 29,165);
	Person p4("Ted", 51,169);
	Person p5("Tim", 21,176);

	//��������
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);

	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "����" << (*it).m_name << "����" << (*it).m_age << "���" << (*it).m_height<<endl;
	}
	cout << "----------------------------------------------------------------------" << endl;
	l.sort(compareperson);

	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "����" << (*it).m_name << "����" << (*it).m_age << "���" << (*it).m_height << endl;
	}


}

int main()
{
	test01();

	system("pause");

	return 0;

}