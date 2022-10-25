#include <iostream>
using namespace std;
//友元friend
//友元的三种实现
//1全局函数做友元
//2类做友元
//3成员函数做友元

//建筑物的类
class Building
{
	//***使得goodgay函数作为友元可以访问building中的私有成员
	friend void goodgay(Building* building);
public:
	Building()
	{
		m_sittingroom = "客厅";
		m_bedroom = "卧室";
	}
public:
	string m_sittingroom;//客厅
private:
	string m_bedroom;//卧室

};

//全局函数 访问私有成员
void goodgay(Building *building)
{
	cout << "好基友的全局函数访问" << building->m_sittingroom << endl;

	//私有成员的访问；需要将全局函数前加friend放入类class的最上方
	cout << "好基友的全局函数访问" << building->m_bedroom << endl;
}
void test01()
{
	Building building;
	goodgay(&building);
}
int main()
{
	test01();
	system("pause");

	return 0;

}