#include <iostream>
using namespace std;
#include<string.>

//�ض���������Ҫ���廯ʵ��,�����࣬����

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






//�Ա����������Ƿ���ȵĺ���
template<class T>
bool mycompare(T& a, T& b)//���ô���
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯��Person�İ汾ʵ�ִ��룬�Ż�����
template<>bool mycompare(Person& a, Person& b)//���ô���
{
	if (a.m_age == b.m_age && a.m_name==b.m_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}



void test01()
{
	int a = 10;
	int b = 20;
	
	bool ret = mycompare(a, b);
	if (ret)
	{
		cout << "a=b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Jerry", 12);
	bool ret = mycompare(p1, p2);
	if (ret)
	{
		cout << "p1=p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}