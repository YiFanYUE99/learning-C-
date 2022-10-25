#include <iostream>
using namespace std;
//成员变量 和 成员函数 分开存储
class Person
{
	int m_A;//非静态成员变量，属于类的对象上的数据

	static int m_B;//静态成员变量，不属于类的对象上的数据
	//没写static都是非静态的

	void func(){}//非静态成员函数，不属于类的对象上
	static void func2() {}//静态成员函数，也不属于类的对象上

};
void test01()
{
	Person p;

	cout << "size of p=" << sizeof(p) << endl;//查看p占多少内存空间
    //空对象占用内存1个字节：C++编译器会给每个空对象分配一个字节为了区分空对象在内存上的位置
	//每个空对象也应该有一个独一无二的内存地址
}
void test02()
{
	Person p;

	cout << "size of p=" << sizeof(p) << endl;
	//对象内有int，分配4个字节的内存
	//加上static int m_B;仍然占4个字节内存
	//加上void func(){}，仍占四个字节，表明非静态成员函数和非静态成员变量分开存储
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}