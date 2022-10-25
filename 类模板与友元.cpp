#include <iostream>
using namespace std;
#include<string>
//��ģ�������Ԫ�����ں�����ʵ��
//ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ�֣���Ҫ�ñ�������ǰ֪��ȫ�ֺ����Ĵ��ڡ�-�鷳

//����ʵ��
template<class T1, class T2>
class Person;//ҲҪ��ǰ�ñ�����֪����Person�����
template<class T1, class T2>
void printperson2(Person<T1, T2>p)
{
	cout << "������" << p.m_name << "���䣺" << p.m_age << endl;
}

template<class T1,class T2>
class Person
{

	//ȫ�ֺ��� ����ʵ����Ԫ�ؼ���friend
	friend void printperson(Person<T1, T2>p)
	{
		cout << "������" << p.m_name << "���䣺" << p.m_age << endl;
	}

	//ȫ�ֺ�������ʵ��
	//�ӿ�ģ��Ĳ����б�����ʵ��Ҫ�ñ�������ǰ֪����δ��룬���е����Ϸ�
	friend void printperson2<>(Person<T1, T2>p);

public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

private:

	T1 m_name;
	T2 m_age;
};
//1.ȫ�ֺ���������ʵ��
void test01()
{
	Person<string, int>p("Tom", 20);
	printperson(p);
}

void test02()
{
	Person<string, int>p("Tom", 20);
	printperson2(p);
}
int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}