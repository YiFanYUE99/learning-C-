#include <iostream>
using namespace std;
//左移运算符重载：输出自定义的数据类型
//输出对象，而不输出其属性
//重载的左移运算符可以实现输出自定义的数据类型
class Person
{
	//友元 全局函数 访问私有内容
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	//利用成员函数 左移运算符
	//不会利用成员函数重载<<,因为这样p在cout左侧
	int m_A;
	int m_B;
};
//只能利用全局函数重载左移运算符,ostream输出流是cout的类型
ostream & operator<<(ostream &cout,Person &p)//本质cout<<p;ostream是cout的类型
{
	cout << "m_A=" << p.m_A << "m_B=" << p.m_B ;
	return cout;
}
void test01()
{
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;
	cout << p << endl;//试图输出p（自定义的数据类型）
}
int main()
{
	test01();
	system("pause");

	return 0;

}