#include <iostream>
using namespace std;
#include<string>

//��ģ��, �����ַ�����������ֵ��
template<class Nametype,class Agetype>
class Person 
{
public:
	Person(Nametype name, Agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showperon()
	{
		cout << this->m_name << endl;
		cout << this->m_age << endl;
	}
	Nametype m_name;
	Agetype m_age;

};
void test01()
{
	//������ģ��template������࣬�����Ϊ��ģ��
	Person<string, int> p1("Tom", 20);//��ģ��Ĵ��뷽��
	p1.showperon();
}


int main()
{
	test01();
	system("pause");

	return 0;

}