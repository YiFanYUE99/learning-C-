#include <iostream>
using namespace std;
//1.��ģ���� �Զ������Ƶ���ʹ�÷�ʽ
//2.��ģ�� ��ģ��Ĳ����б� ������Ĭ�ϲ���//����ģ����Ĭ�ϲ���

//��ģ��
template<class Nametype,class Agetype=int>//int ��Ĭ�ϲ���;����ģ����Ĭ�ϲ���
class Person
{
public:
	Person(Nametype name, Agetype age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	void showperson()
	{
		cout << this->m_name << this->m_age << endl;
	}

	Nametype m_name;
	Agetype m_age;
};

//��ģ�����Զ������Ƶ���ʽ
void test01()
{
	Person<string, int>p("Tom", 100);//����ʡ�ԡ����ڵĶ������� �Զ������Ƶ�
	p.showperson();

	Person<string>p1("Jerry", 10);
	p1.showperson();

}


int main()
{
	test01();

	system("pause");

	return 0;

}