#include <iostream>
using namespace std;
//类做友元

class Building;//告诉编译器一会我会写这个类，先不要报错
class goodgay
{
public:
	goodgay();
	void visit();//参观函数访问building中的属性
private:
	Building * building;
};
class Building
{
	//**goodgay这类是本类的好朋友可以访问私有成员,有了下面这行才可以访问bedroom
	friend class goodgay;
public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};
//类外写成员函数
Building::Building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}
goodgay::goodgay()
{
	//创建建筑物的对象
	building = new Building;
}
//参观函数的类外是此案
void goodgay::visit()
{
	cout << "好基友类正在访问" << building->m_sittingroom << endl;
	cout << "好基友类正在访问" << building->m_bedroom << endl;
}
void test01()
{
	goodgay gg;
	gg.visit();
}
int main()
{
	test01();
	system("pause");

	return 0;

}