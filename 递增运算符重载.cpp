#include <iostream>
using namespace std;
//重载递增++运算符
//自定义的整型
class myinteger
{
	friend ostream& operator << (ostream& cout, myinteger myint);
public:
	myinteger()
	{
		m_Num = 0;
	}
	//重载++运算符
	//前置++:返回引用
	myinteger& operator++()
	{
		//先进行++运算
		m_Num++;
		//再将自身做返回
		return *this ;//返回引用，不返回值；为了一直对一个数据操作
	}
	//重载后置++运算符:在括号内加int（必须是int 不能是double float） int代表占位参数，用于区分前置和后置
	myinteger& operator++(int)
	{
		//先 记录当时结果
		myinteger temp = *this;
		//后 递增
		m_Num++;
		//最后将记录结果返回
		return temp;//后置递增返回值
	}
private:
	int m_Num;
};
//重载左移<<运算符
ostream& operator<<(ostream & cout, myinteger myint)
{
	cout << myint.m_Num;
	return cout;
}
void test01()
{
	myinteger myint;
	cout << ++myint << endl;
	cout << myint << endl;
}
void test02()
{
	myinteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	test01();
	test02();
	int c = 10;
	cout << c++ << endl;//c++输出的是起始的c，但是c+1；10
	cout << c << endl;//11
	int d = 10;
	cout << ++d << endl;//使得d+1且输出d+1
	cout << d << endl;//11

	system("pause");

	return 0;

}