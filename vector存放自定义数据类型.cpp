#include <iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
//vector��������Զ�����������

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
	
	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//���������е�����
	//it�����ú���person����������*it;<>����ʲô�������ͣ�*it���������ʲô��������
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "Name: " << (*it).m_name << "Age" << (*it).m_age << endl;
		cout << it->m_name << it->m_age << endl;//it������ָ�룬����ͨ��->�ķ�ʽ�õ�name��age

	}

}
//����Զ�����������͵� ָ��
void test02()
{
	vector<Person*>v;

	Person p1("aaa", 10);
	Person p2("abb", 10);
	Person p3("aab", 10);
	Person p4("aba", 10);
	Person p5("baa", 10);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//���������е�����
	//it�����ú���person*����������*it;<>����ʲô�������ͣ�*it���������ʲô��������
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)//*it��person��ָ��
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