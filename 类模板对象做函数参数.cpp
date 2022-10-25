#include <iostream>
#include<string>
using namespace std;
//��ģ���������������
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
		cout << "����" << this->m_name << "����" << this->m_age << endl;
	}

	T1 m_name;
	T2 m_age;

};


//һ�������ִ��뷽ʽ��

//1ָ���������ͣ���ã�
void printperson1(Person<string,int>&p)
{
	p.showperson();
}

void test01()
{
	Person<string, int>p("Tom", 20);
	printperson1(p);
}



//2����ģ�廯
template<class T1,class T2>
void printperson2(Person<T1, T2>& p)//����ģ�廯
{
	p.showperson();
	//�鿴����
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;//typrid(T).name()�鿴T����������
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;

}

void test02()
{
	Person<string, int>p("Jerry", 20);
	printperson2(p);
}

//3������ģ�廯
template<class T>
void printperson3(T& p)//ֱ�ӽ�Person��Ϊһ����
{
	p.showperson();
	cout << "T����������" << typeid(T).name() << endl;//T��person class����
}


void test03()
{
	Person<string, int>p("��ɮ", 90);
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