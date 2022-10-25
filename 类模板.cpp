#include <iostream>
using namespace std;
#include<string>

//类模板, 又有字符串型又有数值型
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
	//在声明模板template后面加类，此类成为类模板
	Person<string, int> p1("Tom", 20);//类模板的传入方法
	p1.showperon();
}


int main()
{
	test01();
	system("pause");

	return 0;

}