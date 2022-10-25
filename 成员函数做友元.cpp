#include <iostream>
using namespace std;
//成员函数做友元
class Building;//先声明避免编译器报错
class goodgay
{
public:
	goodgay();
	void visit();//visit可以访问building中私有成员
	void visit2();//visit2不可以访问building中私有成员
private:
	Building * building;
};
class Building
{
	//**告诉编译器，goodgay类下的visit成员函数作为本类的好朋友，可以访问私有成员
	friend void goodgay::visit();
public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};
//类外实现成员函数
Building::Building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}
goodgay::goodgay()
{
	building = new Building;//为building创建堆区且用指针维护该对象
}
void goodgay::visit()//visit可以访问building中私有成员
{
	cout << "visit在访问" << building->m_sittingroom << endl;

	cout << "visit在访问" << building->m_bedroom << endl;

}
void goodgay::visit2()//visit2不可以访问building中私有成员
{
	cout << "visit2在访问" << building->m_sittingroom << endl;
}
void test01()
{
	goodgay gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test01();
	system("pause");

	return 0;

}