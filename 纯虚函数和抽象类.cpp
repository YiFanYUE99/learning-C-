#include <iostream>
using namespace std;
//return 0;改为纯虚函数=》抽象类：1无法实例化元对象2子类必须重写，否则也是抽象类
class Base
{
public:
	//纯虚函数
	virtual void func() = 0;
};
class Son:public Base
{
public:
	virtual void func() //virtual可有可无
	{
		cout << "func调用" << endl;
	};

};
void test01()
{
	//Base b;//纯虚函数无法实例化对象
	//new Base;
	Son s;//子类必须重写父类中的纯虚函数，否则无法实例化对象
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
	system("pause");

	return 0;

}