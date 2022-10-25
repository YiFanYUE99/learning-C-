#include <iostream>
using namespace std;

//菱形继承：两个子类共有一个父类，该两个子类又有一个共同的子类
//少写菱形继承
//动物类
class Animal//虚基类
{
public:
	int m_Age;

};
//利用虚继承，解决菱形继承的问题
//关键字virtual
//羊类
class sheep:virtual public Animal
{

};

//驼类
class tuo:virtual public Animal
{

};

//羊驼类
class yangtuo:public sheep,public tuo
{

};

void test01()
{
	yangtuo st;
	st.sheep::m_Age = 18;
	st.tuo::m_Age = 28;
	//菱形继承，当两个父类拥有相同数据，需要加以作用域区分
	cout << "sheep"<< st.sheep::m_Age << endl;
	cout << "tuo" << st.tuo::m_Age << endl;
	//虚继承继承的是指针，数据age仅一份。
	cout << "st.m_Age" << st.m_Age << endl;

}

int main()
{
	test01();
	
	system("pause");

	return 0;

}