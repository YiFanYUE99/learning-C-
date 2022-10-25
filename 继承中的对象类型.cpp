#include <iostream>
using namespace std;
//从父类继承过来的成员，哪些属于子类对象中
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base//共4个int 16个字节
{
public:
	int m_D;
};
//利用Developer command prompt for vs2022查看
//cl /d1 reportSingleClassLayoutSon "继承中的对象类型.cpp" 
//cL d①
void test01()
{
	//父类中所有非静态的属性都会被子类继承下去
	//编译器把private隐藏了，但是继承下去了

	cout << "size of Son=" << sizeof(Son) << endl;//占16个字节
}
int main()
{
	test01();
	system("pause");

	return 0;

}