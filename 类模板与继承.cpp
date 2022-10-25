#include <iostream>
using namespace std;
//类模板与继承
//当类模板碰到继承时，需要注意以下几点
//1当子类继承的父类是一个类模板时，子类在声明的时候，要制定出父类中T的类型
//2如果不指定，编译器无法给子类分配内存
//3如果想灵活指定出父类中T的类型，子类也需变为类模板
template<class T>
class Base
{
	T m;
};
class Son: public Base<int> //1不能public Base而不加base的数据类型
{

};
void test01()
{
	Son s1;
}
//3如果想灵活指定出父类中T的类型，子类也需变为类模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
	}
	T1 obj;
};
void test02()
{
	Son2<int, char>S2;//父类是char，子类是int
}
int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}
