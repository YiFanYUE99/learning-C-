#include <iostream>
using namespace std;
//继承中的构造和析构顺序
class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};
class Son :public Base
{
public:
	Son()
	{
		cout << "son的构造函数" << endl;
	}
	~Son()
	{
		cout << "son的析构函数" << endl;
	}
};
void test01()
{
	Son s;
}
//继承中的构造和析构顺序如下
//先构造父类再构造儿子，先析构儿子再析构父亲
int main()
{
	test01();
	system("pause");

	return 0;

}