#include <iostream>
using namespace std;
#include<string>
#include"Person.hpp"//�ֶ���.h��Ϊ.cpp
//#include"Person.cpp"//��ģ���ļ���дҪ����cpp������.h
//��ģ����ļ���д
//���⣺
// ��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
//���1 ����.cpp������.h
//���2 ���ã���.h .cppд��һ�𣬺�׺����Ϊ.hpp

//template<class T1,class T2>
//class Person 
//{
//public:
//	Person(T1 name, T2 age);
//	void showperson();
//
//	T1 m_name;
//	T2 m_age;
//
//};
////ģ�庯��������ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showperson()
//{
//	cout << "name" << this->m_name << "age" << this->m_age << endl;
//}

void test01()
{
	Person<string, int>p("Jerry", 18);
	p.showperson();
}

int main()
{
	test01();
	system("pause");

	return 0;

}